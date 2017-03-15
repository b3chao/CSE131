/* File: ast_expr.cc
 * -----------------
 * Implementation of expression node classes.
 */

#include <string.h>
#include "ast_expr.h"
#include "ast_type.h"
#include "ast_decl.h"
#include "symtable.h"

void Expr::Check() {
    printf("Expr Check\n");
    bool *valid = new bool(true);
    typeCheck(valid);
}

Type *Expr::typeCheck(bool *valid) {
    printf("Expr typeCheck\n");
    return Type::errorType;
}

Type *VarExpr::typeCheck(bool *valid) {
    printf("VarExpr typeCheck\n");
    Symbol *findS = st->find(this->id->GetName(), new bool(false));

    if (findS == NULL) {
        if (*valid)
            ReportError::IdentifierNotDeclared(this->id, LookingForVariable);

        *valid = false;
        return Type::errorType;
    } else {
         VarDecl *v = dynamic_cast<VarDecl *>(findS->decl);
         if (v) 
            return v->GetType();
        
        else
            return Type::errorType;
    }

}

Type *CompoundExpr::typeCheck(bool *valid) {
    printf("CompoundExpr typeCheck\n");
    if (left != NULL) {
        Type *leftType = left->typeCheck(valid); 
        Type *rightType = right->typeCheck(valid); 

        if (strcmp(leftType->GetTypeName(), rightType->GetTypeName())) {
            if (*valid)
                ReportError::IncompatibleOperands(op, leftType, rightType);

            *valid = false;
            return Type::errorType;
        }

        return leftType;
    } else {
        return right->typeCheck(valid);
    }
}

Type *ArithmeticExpr::typeCheck(bool *valid) {
    printf("ArithmeticExpr typeCheck\n");

    

    //unary
    if (left == NULL) {
        Type *rightType = right->typeCheck(valid);

        if (!strcmp(rightType->GetTypeName(),"bool")) {
            if (*valid)
                ReportError::IncompatibleOperand(op, rightType);

            *valid = false;

            return Type::errorType;
        }

        return rightType;
    } else {
        Type *leftType = left->typeCheck(valid); 
        Type *rightType = right->typeCheck(valid);
         
        if (op->IsOp("&&") || op->IsOp("||")) {
            
            if (strcmp(leftType->GetTypeName(),"bool") != 0 ||
                strcmp(rightType->GetTypeName(),"bool") != 0) {

                if (*valid)
                    ReportError::IncompatibleOperands(op, leftType, rightType);

                *valid = false;

                return Type::errorType; //added
            }
            return Type::boolType;
        } else if (op->IsOp("==") || op->IsOp("!=")) {

            if (strcmp(leftType->GetTypeName(), rightType->GetTypeName())) {

                if (*valid)
                    ReportError::IncompatibleOperands(op, leftType, rightType);

                *valid = false;

                return Type::errorType; //added
            }
            return Type::boolType;
        }

        return CompoundExpr::typeCheck(valid);
    }
}

Type *RelationalExpr::typeCheck(bool *valid) {
    printf("RelationalExpr typeCheck\n");
    Type *leftType = left->typeCheck(valid); 
    Type *rightType = right->typeCheck(valid); 

    if (strcmp(leftType->GetTypeName(), rightType->GetTypeName())) {

        if (*valid)
            ReportError::IncompatibleOperands(op, leftType, rightType);

        *valid = false;

        return Type::errorType;
    }
    return Type::boolType;
}

Type *PostfixExpr::typeCheck(bool *valid) {
    printf("PostfixExpr typeCheck\n");
    Type *leftType = left->typeCheck(valid); 

    if (!leftType->IsNumeric()) {

        if (*valid)
            ReportError::IncompatibleOperand(op, leftType);

        *valid = false;
        return Type::errorType;
    }
    return leftType;
}

//not tested
Type *ConditionalExpr::typeCheck(bool *valid) {
    return NULL;
}

Type *ArrayAccess::typeCheck(bool *valid) {
    printf("ArrayAccess typeCheck\n");
    ArrayType *at = dynamic_cast<ArrayType *>(base->typeCheck(valid));

    if (!at) {
        VarExpr *v = dynamic_cast<VarExpr *>(base);
        if (!v) {
            if (*valid)
                ReportError::NotAnArray(v->GetIdentifier());

            *valid = false;
            return Type::errorType;
        }

        return Type::errorType;
    } else
        return at->GetElemType(); 
}

Type *Call::typeCheck(bool *valid) {
    printf("Call typeCheck\n");
    Symbol *s = st->find(field->GetName(), new bool(false));

    if (s) {
        if (s->kind != E_FunctionDecl) {
            ReportError::NotAFunction(field);
            *valid = false;

            return Type::errorType;
        } else {
            FnDecl *f = dynamic_cast<FnDecl *>(s->decl);
            List<VarDecl*> *forms = f->GetFormals();
            int numFormals = forms->NumElements();

            if (numFormals > actuals->NumElements()) {
                if (*valid)
                    ReportError::LessFormals(field, numFormals, actuals->NumElements());

                *valid = false;

                return Type::errorType;
            } else if (numFormals < actuals->NumElements()) {
                if (*valid)
                    ReportError::ExtraFormals(field, numFormals, actuals->NumElements());

                *valid = false;

                return Type::errorType;
            } else {
                for (int i=0; i<numFormals; i++) {
                    Type *typeF = forms->Nth(i)->GetType();

                    bool *valid2 = new bool(true);
                    Type *typeA = actuals->Nth(i)->typeCheck(valid2);
            
                    if (strcmp(typeF->GetTypeName(),typeA->GetTypeName())) {
                        if (*valid)
                            ReportError::FormalsTypeMismatch(f->GetIdentifier(), i, typeF, typeA);
                        
                        *valid = false;

                        return Type::errorType;
                    }
                }
            }

            return f->GetType();
        }
    }

    return Type::errorType;
}

Type * FieldAccess::typeCheck(bool *valid) {
    printf("FieldAccess typeCheck\n");
    Type * left;
    if (base != NULL) {
        left = base->typeCheck(valid);
        char * swizzle = field->GetName();
        int swizzleLen = strlen(field->GetName());

        int v = 0;

        for (int i = 0; i<swizzleLen;i++) {
            if (swizzle[i] == 'x') {
                if (v<2) {
                    v = 2;
                }
            } else if (swizzle[i] == 'y') {
                if (v<2) {
                    v = 2;
                }

            } else if (swizzle[i] == 'z') {
                if (v<3) {
                    v = 3;
                }

            } else if (swizzle[i] == 'w') {
                if (v<4) {
                    v = 4;
                }
            } else {
                if (*valid == true) {
                    ReportError::InvalidSwizzle(field,base);
                }
                *valid = false;
                return Type::errorType;
                break;
            }
        }

        if (strcmp(left->GetTypeName(),"vec2")==0) {
            if (v >2 && *valid==true) {
                ReportError::SwizzleOutOfBound(field,base);
                *valid = false;
                return Type::errorType;
            }
            return swizzleLength(base,field,swizzleLen,valid);
        }
        if (strcmp(left->GetTypeName(),"vec3")==0) {
            if (v >3 && *valid==true) {
                ReportError::SwizzleOutOfBound(field,base);
                *valid = false;
                return Type::errorType;
            }
            return swizzleLength(base,field,swizzleLen,valid);
        }
        if (strcmp(left->GetTypeName(),"vec4")==0) {
            if (v >4 && *valid==true) {
                ReportError::SwizzleOutOfBound(field,base);
                *valid = false;
                return Type::errorType;
            }
            return swizzleLength(base,field,swizzleLen,valid);
        }

        if (*valid == true) {
            ReportError::InaccessibleSwizzle(field,base);
        *valid = false;
        return Type::errorType;
        }
    }
    return Type::errorType;
}

Type * FieldAccess::swizzleLength(Expr *base, Identifier *field, int len, bool *valid) {
    printf("FieldAccess swizzleLength\n");
    if (len == 1) {
        return Type::floatType;
    }
    else if (len == 2) {
        return Type::vec2Type;
    }
    else if (len == 3) {
        return Type::vec3Type;
    }
    else if (len == 4) {
        return Type::vec4Type;
    } else {
        if (*valid == true) {
            ReportError::OversizedVector(field,base);
        }
        *valid = true;
        return Type::errorType;                                   
    }

}


//=====================================================================

IntConstant::IntConstant(yyltype loc, int val) : Expr(loc) {
    value = val;
}
void IntConstant::PrintChildren(int indentLevel) { 
    printf("%d", value);
}

FloatConstant::FloatConstant(yyltype loc, double val) : Expr(loc) {
    value = val;
}
void FloatConstant::PrintChildren(int indentLevel) { 
    printf("%g", value);
}

BoolConstant::BoolConstant(yyltype loc, bool val) : Expr(loc) {
    value = val;
}
void BoolConstant::PrintChildren(int indentLevel) { 
    printf("%s", value ? "true" : "false");
}

VarExpr::VarExpr(yyltype loc, Identifier *ident) : Expr(loc) {
    Assert(ident != NULL);
    this->id = ident;
}

void VarExpr::PrintChildren(int indentLevel) {
    id->Print(indentLevel+1);
}

Operator::Operator(yyltype loc, const char *tok) : Node(loc) {
    Assert(tok != NULL);
    strncpy(tokenString, tok, sizeof(tokenString));
}

void Operator::PrintChildren(int indentLevel) {
    printf("%s",tokenString);
}

bool Operator::IsOp(const char *op) const {
    return strcmp(tokenString, op) == 0;
}

CompoundExpr::CompoundExpr(Expr *l, Operator *o, Expr *r) 
  : Expr(Join(l->GetLocation(), r->GetLocation())) {
    Assert(l != NULL && o != NULL && r != NULL);
    (op=o)->SetParent(this);
    (left=l)->SetParent(this); 
    (right=r)->SetParent(this);
}

CompoundExpr::CompoundExpr(Operator *o, Expr *r) 
  : Expr(Join(o->GetLocation(), r->GetLocation())) {
    Assert(o != NULL && r != NULL);
    left = NULL; 
    (op=o)->SetParent(this);
    (right=r)->SetParent(this);
}

CompoundExpr::CompoundExpr(Expr *l, Operator *o) 
  : Expr(Join(l->GetLocation(), o->GetLocation())) {
    Assert(l != NULL && o != NULL);
    (left=l)->SetParent(this);
    (op=o)->SetParent(this);
}

void CompoundExpr::PrintChildren(int indentLevel) {
   if (left) left->Print(indentLevel+1);
   op->Print(indentLevel+1);
   if (right) right->Print(indentLevel+1);
}
   
ConditionalExpr::ConditionalExpr(Expr *c, Expr *t, Expr *f)
  : Expr(Join(c->GetLocation(), f->GetLocation())) {
    Assert(c != NULL && t != NULL && f != NULL);
    (cond=c)->SetParent(this);
    (trueExpr=t)->SetParent(this);
    (falseExpr=f)->SetParent(this);
}

void ConditionalExpr::PrintChildren(int indentLevel) {
    cond->Print(indentLevel+1, "(cond) ");
    trueExpr->Print(indentLevel+1, "(true) ");
    falseExpr->Print(indentLevel+1, "(false) ");
}
ArrayAccess::ArrayAccess(yyltype loc, Expr *b, Expr *s) : LValue(loc) {
    (base=b)->SetParent(this); 
    (subscript=s)->SetParent(this);
}

void ArrayAccess::PrintChildren(int indentLevel) {
    base->Print(indentLevel+1);
    subscript->Print(indentLevel+1, "(subscript) ");
}
     
FieldAccess::FieldAccess(Expr *b, Identifier *f) 
  : LValue(b? Join(b->GetLocation(), f->GetLocation()) : *f->GetLocation()) {
    Assert(f != NULL); // b can be be NULL (just means no explicit base)
    base = b; 
    if (base) base->SetParent(this); 
    (field=f)->SetParent(this);
}


void FieldAccess::PrintChildren(int indentLevel) {
    if (base) base->Print(indentLevel+1);
    field->Print(indentLevel+1);
}

Call::Call(yyltype loc, Expr *b, Identifier *f, List<Expr*> *a) : Expr(loc)  {
    Assert(f != NULL && a != NULL); // b can be be NULL (just means no explicit base)
    base = b;
    if (base) base->SetParent(this);
    (field=f)->SetParent(this);
    (actuals=a)->SetParentAll(this);
}

void Call::PrintChildren(int indentLevel) {
   if (base) base->Print(indentLevel+1);
   if (field) field->Print(indentLevel+1);
   if (actuals) actuals->PrintAll(indentLevel+1, "(actuals) ");
}

