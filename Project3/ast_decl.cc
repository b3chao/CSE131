/* File: ast_decl.cc
 * -----------------
 * Implementation of Decl node classes.
 */
#include "ast_decl.h"
#include "ast_type.h"
#include "ast_stmt.h"
#include "symtable.h"
#include "errors.h"   

//VarDecl Check
void VarDecl::Check() {
    printf("VarDecl Check()\n");
    Symbol *findS = Node::st->find(this->id->GetName(), new bool(true));

    if(findS != NULL) {//symbol already exists
        ReportError::DeclConflict(this, findS->decl);
        Node::st->remove(*findS);
    }

    Symbol *s = new Symbol(this->id->GetName(), this, E_VarDecl);
    //printf("Type Name in VarDecl %s is: %s\n",this->GetIdentifier()->GetName(), this->GetType()->GetTypeName());
    Node::st->insert(*s);

    VarDecl * v = dynamic_cast<VarDecl*>(this);

    if (v->assignTo != NULL) {
        bool *valid = new bool(true);
        Type *t = v->assignTo->typeCheck(valid);

        if (t == NULL) {
            //ReportError::InvalidInitialization(this->id, this->type, new Type("void"));

            *valid = false;
        } else if (strcmp(this->type->GetTypeName(),t->GetTypeName())) {
            if (*valid) 
                ReportError::InvalidInitialization(this->id, this->type, t);

            *valid = false;
        } 
    } 

}     


void FnDecl::Check() {
    printf("FnDecl Check()\n");

    //check if function exists in scope
    Symbol *findS = Node::st->find(this->id->GetName(), new bool(true));
    if(findS != NULL) {//symbol already exists
        ReportError::DeclConflict(this, findS->decl);
        Node::st->remove(*findS);

    }

    Symbol *s = new Symbol(this->id->GetName(), this, E_FunctionDecl);
    Node::st->insert(*s);

    //new scope
    st->push();

    if (this->formals->NumElements()>0) {
        
        for (int i = 0;i<this->formals->NumElements();i++) {
            VarDecl * vDecl = this->formals->Nth(i);
            vDecl->Check();
        }
    }

    bool *toPush;
    if (!strcmp(this->GetType()->GetTypeName(),"void"))
        toPush = new bool(true);
    else
        toPush = new bool(false);

    returns->push(this->GetType());
    returned->push(toPush);

    StmtBlock *sb = dynamic_cast<StmtBlock *>(this->body);
    sb->Check(new bool(true)); 

    if (!*(returned->top()))
        ReportError::ReturnMissing(this);

    returns->pop();
    returned->pop();

    st->pop();
}
         
Decl::Decl(Identifier *n) : Node(*n->GetLocation()) {
    Assert(n != NULL);
    (id=n)->SetParent(this); 
}

VarDecl::VarDecl(Identifier *n, Type *t, Expr *e) : Decl(n) {
    Assert(n != NULL && t != NULL);
    (type=t)->SetParent(this);
    if (e) (assignTo=e)->SetParent(this);
    typeq = NULL;
}

VarDecl::VarDecl(Identifier *n, TypeQualifier *tq, Expr *e) : Decl(n) {
    Assert(n != NULL && tq != NULL);
    (typeq=tq)->SetParent(this);
    if (e) (assignTo=e)->SetParent(this);
    type = NULL;
}

VarDecl::VarDecl(Identifier *n, Type *t, TypeQualifier *tq, Expr *e) : Decl(n) {
    Assert(n != NULL && t != NULL && tq != NULL);
    (type=t)->SetParent(this);
    (typeq=tq)->SetParent(this);
    if (e) (assignTo=e)->SetParent(this);
}
  
void VarDecl::PrintChildren(int indentLevel) { 
   if (typeq) typeq->Print(indentLevel+1);
   if (type) type->Print(indentLevel+1);
   if (id) id->Print(indentLevel+1);
   if (assignTo) assignTo->Print(indentLevel+1, "(initializer) ");
}

FnDecl::FnDecl(Identifier *n, Type *r, List<VarDecl*> *d) : Decl(n) {
    Assert(n != NULL && r!= NULL && d != NULL);
    (returnType=r)->SetParent(this);
    (formals=d)->SetParentAll(this);
    body = NULL;
    returnTypeq = NULL;
}

FnDecl::FnDecl(Identifier *n, Type *r, TypeQualifier *rq, List<VarDecl*> *d) : Decl(n) {
    Assert(n != NULL && r != NULL && rq != NULL&& d != NULL);
    (returnType=r)->SetParent(this);
    (returnTypeq=rq)->SetParent(this);
    (formals=d)->SetParentAll(this);
    body = NULL;
}

void FnDecl::SetFunctionBody(Stmt *b) { 
    (body=b)->SetParent(this);
}

void FnDecl::PrintChildren(int indentLevel) {
    if (returnType) returnType->Print(indentLevel+1, "(return type) ");
    if (id) id->Print(indentLevel+1);
    if (formals) formals->PrintAll(indentLevel+1, "(formals) ");
    if (body) body->Print(indentLevel+1, "(body) ");
}

