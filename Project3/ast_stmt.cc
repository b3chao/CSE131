/* File: ast_stmt.cc
 * -----------------
 * Implementation of statement node classes.
 */
#include "ast_stmt.h"
#include "ast_type.h"
#include "ast_decl.h"
#include "ast_expr.h"
#include "errors.h"
#include "symtable.h"

Program::Program(List<Decl*> *d) {
    Assert(d != NULL);
    (decls=d)->SetParentAll(this);
}

void Program::PrintChildren(int indentLevel) {
    decls->PrintAll(indentLevel+1);
    printf("\n");
}

void Program::Check() {
    /* pp3: here is where the semantic analyzer is kicked off.
     *      The general idea is perform a tree traversal of the
     *      entire program, examining all constructs for compliance
     *      with the semantic rules.  Each node can have its own way of
     *      checking itself, which makes for a great use of inheritance
     *      and polymorphism in the node classes.
     */

    // sample test - not the actual working code
    // replace it with your own implementation
    if ( decls->NumElements() > 0 ) {
      for ( int i = 0; i < decls->NumElements(); ++i ) {
        Decl *d = decls->Nth(i);
        /* !!! YOUR CODE HERE !!!
         * Basically you have to make sure that each declaration is 
         * semantically correct.
         */
         d->Check();
      }
    }
}
//--------------------------------------------------------------------------------------
//own fns

void Stmt::Check() {
  printf("Stmt Check\n");
  this->Check();
}

void StmtBlock::Check() {
  printf("StmtBlock Check\n");
  st->push();
  
  if (stmts->NumElements()>0) {
    for (int i = 0; i<stmts->NumElements();i++) {
      Stmt * stmt = stmts->Nth(i);
      stmt->Check();
    }
  }

  st->pop();
}

void StmtBlock::Check(bool *fromDecl) {
  printf("StmtBlock Check\n");

  if (stmts->NumElements()>0) {
    for (int i = 0; i<stmts->NumElements();i++) {
      Stmt * stmt = stmts->Nth(i);
      stmt->Check();
    }
  }
}

void DeclStmt::Check() {
  printf("DeclStmt Check\n");
  this->decl->Check();
}

void ForStmt::Check() {
  printf("ForStmt Check\n");
  loopNum++;

  if (init != NULL)
    init->Check();

  if (test != NULL) {
    bool *valid = new bool(true);
    Type *t = test->typeCheck(valid);

    if (strcmp(t->GetTypeName(), "bool")) {
      ReportError::TestNotBoolean(test);
      
      *valid = false;
    }
  }

  if (step != NULL)
    step->Check();

  if (body != NULL)
    body->Check();

  loopNum--;
}

void WhileStmt::Check() {
  printf("WhileStmt Check\n");
  loopNum++;

    if (test != NULL) {
      bool *valid = new bool(true);
      Type *t = test->typeCheck(valid);
      if (valid) {
        if (strcmp(t->GetTypeName(),"bool")) {
          ReportError::TestNotBoolean(test);
          *valid = true;
        }
      }
    }

    if (body != NULL)
      body->Check();

    loopNum--;
}

void IfStmt::Check() {
  printf("IfStmt Check\n");
  if (test != NULL) {
    bool *valid = new bool(true);
    Type *t = test->typeCheck(valid);

    if (strcmp(t->GetTypeName(), "bool")) {
      ReportError::TestNotBoolean(test);
      
      *valid = false;
    }
  }

  if (body != NULL)
    body->Check();

  if (elseBody != NULL)
    elseBody->Check();
}

void BreakStmt::Check() {
  printf("BreakStmt Check\n"); 
  if (loopNum <= 0) 
    ReportError::BreakOutsideLoop(this);
}

void ContinueStmt::Check() {
  printf("ContinueStmt Check\n"); 
  if (loopNum <= 0) 
    ReportError::ContinueOutsideLoop(this);
}

void ReturnStmt::Check() {
  printf("ReturnStmt Check\n");
  if (returns->empty())
    return;

  Type *rt = returns->top();

  if (expr != NULL) {
    bool *valid = new bool(true);
    Type *t = expr->typeCheck(valid);

    if (*valid) {
      if (strcmp(t->GetTypeName(), rt->GetTypeName())) {
        ReportError::ReturnMismatch(this, t, rt);
      } 
    }
  } else {//void return
    if (strcmp(rt->GetTypeName(),"void")) {
      ReportError::ReturnMismatch(this, new Type("void"), rt);
    }
  }

  *(returned->top()) = true;
}

void Case::Check() {
  printf("Case Check\n");
  if (label != NULL)
    label->Check();

  if (stmt != NULL)
    stmt->Check();
}

void Default::Check() {
  printf("Default Check\n");
  if (label != NULL)
    label->Check();

  if (stmt != NULL)
    stmt->Check();
}

void SwitchStmt::Check() {
  printf("SwitchStmt Check");
  loopNum++;

  if (expr != NULL)  
    expr->Check();
  

  if (cases->NumElements() > 0) {
    for (int i=0; i<cases->NumElements(); i++) {
      cases->Nth(i)->Check();
    }
  }

  if (def != NULL)
    def->Check();

  loopNum--;
}


//-----------------------------------------------------------------------------------------

StmtBlock::StmtBlock(List<VarDecl*> *d, List<Stmt*> *s) {
    Assert(d != NULL && s != NULL);
    (decls=d)->SetParentAll(this);
    (stmts=s)->SetParentAll(this);
}

void StmtBlock::PrintChildren(int indentLevel) {
    decls->PrintAll(indentLevel+1);
    stmts->PrintAll(indentLevel+1);
}

DeclStmt::DeclStmt(Decl *d) {
    Assert(d != NULL);
    (decl=d)->SetParent(this);
}

void DeclStmt::PrintChildren(int indentLevel) {
    decl->Print(indentLevel+1);
}

ConditionalStmt::ConditionalStmt(Expr *t, Stmt *b) { 
    Assert(t != NULL && b != NULL);
    (test=t)->SetParent(this); 
    (body=b)->SetParent(this);
}

ForStmt::ForStmt(Expr *i, Expr *t, Expr *s, Stmt *b): LoopStmt(t, b) { 
    Assert(i != NULL && t != NULL && b != NULL);
    (init=i)->SetParent(this);
    step = s;
    if ( s )
      (step=s)->SetParent(this);
}

void ForStmt::PrintChildren(int indentLevel) {
    init->Print(indentLevel+1, "(init) ");
    test->Print(indentLevel+1, "(test) ");
    if ( step )
      step->Print(indentLevel+1, "(step) ");
    body->Print(indentLevel+1, "(body) ");
}

void WhileStmt::PrintChildren(int indentLevel) {
    test->Print(indentLevel+1, "(test) ");
    body->Print(indentLevel+1, "(body) ");
}

IfStmt::IfStmt(Expr *t, Stmt *tb, Stmt *eb): ConditionalStmt(t, tb) { 
    Assert(t != NULL && tb != NULL); // else can be NULL
    elseBody = eb;
    if (elseBody) elseBody->SetParent(this);
}

void IfStmt::PrintChildren(int indentLevel) {
    if (test) test->Print(indentLevel+1, "(test) ");
    if (body) body->Print(indentLevel+1, "(then) ");
    if (elseBody) elseBody->Print(indentLevel+1, "(else) ");
}


ReturnStmt::ReturnStmt(yyltype loc, Expr *e) : Stmt(loc) { 
    expr = e;
    if (e != NULL) expr->SetParent(this);
}

void ReturnStmt::PrintChildren(int indentLevel) {
    if ( expr ) 
      expr->Print(indentLevel+1);
}

SwitchLabel::SwitchLabel(Expr *l, Stmt *s) {
    Assert(l != NULL && s != NULL);
    (label=l)->SetParent(this);
    (stmt=s)->SetParent(this);
}

SwitchLabel::SwitchLabel(Stmt *s) {
    Assert(s != NULL);
    label = NULL;
    (stmt=s)->SetParent(this);
}

void SwitchLabel::PrintChildren(int indentLevel) {
    if (label) label->Print(indentLevel+1);
    if (stmt)  stmt->Print(indentLevel+1);
}

SwitchStmt::SwitchStmt(Expr *e, List<Stmt *> *c, Default *d) {
    Assert(e != NULL && c != NULL && c->NumElements() != 0 );
    (expr=e)->SetParent(this);
    (cases=c)->SetParentAll(this);
    def = d;
    if (def) def->SetParent(this);
}

void SwitchStmt::PrintChildren(int indentLevel) {
    if (expr) expr->Print(indentLevel+1);
    if (cases) cases->PrintAll(indentLevel+1);
    if (def) def->Print(indentLevel+1);
}

