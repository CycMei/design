#include "Interpret.h"
#include<iostream>

AbstractExpression::AbstractExpression() {

}

AbstractExpression::~AbstractExpression() {

}
void AbstractExpression::Interpret(const InterContext & c) {

}





TerminalExpression::TerminalExpression(const std::string &statement) :_statement(statement) {

}
TerminalExpression::~TerminalExpression() {

}
void TerminalExpression::Interpret(const InterContext &c) {
	std::cout << _statement << "TerminalExpression...." << std::endl;
}





NonterminalExpression::NonterminalExpression(AbstractExpression *exp, int times) :_expression(exp), _times(times) {

}
NonterminalExpression::~NonterminalExpression() {

}
void NonterminalExpression::Interpret(const InterContext &c) {
	for (int i = 0; i != _times; ++i) {
		_expression->Interpret(c);
	}
}
