/*
 * Symbol table implementation
 *
 */

#include "symtable.h"

//scoped table
ScopedTable::ScopedTable() {
}

ScopedTable::~ScopedTable() {
}

void ScopedTable::insert(Symbol &sym) {
	symbols.insert(std::pair<const char *, Symbol>(sym.name, sym));
}

void ScopedTable::remove(Symbol &sym) {
	symbols.erase(sym.name);
}

Symbol *ScopedTable::find(const char *name) {
	return &(symbols.find(name)->second);
}



//symbol table
SymbolTable::SymbolTable() {
	push();
}

SymbolTable::~SymbolTable() {
}

void SymbolTable::push() {
	tables.push_back(new ScopedTable());
}

void SymbolTable::pop() {
	tables.pop_back();
}

void SymbolTable::insert(Symbol &sym) {
	tables.back()->insert(sym);
}

void SymbolTable::remove(Symbol &sym) {
	tables.back()->remove(sym);
}

Symbol *SymbolTable::find(const char *name) {
	return tables.back()->find(name);
}