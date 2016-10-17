#ifndef INTERPRET_H
#define INTERPRET_H
#include"InterContext.h"
#include<string>
class AbstractExpression {
public:
	virtual ~AbstractExpression();
	virtual void Interpret(const InterContext &c);
protected:
	AbstractExpression();
};

class TerminalExpression :public AbstractExpression {
public:
	TerminalExpression(const std::string &statement);
	~TerminalExpression();
	void Interpret(const InterContext &c) override;
private:
	std::string _statement;
};

class NonterminalExpression :public AbstractExpression {
public:
	NonterminalExpression(AbstractExpression *expression, int times);
	~NonterminalExpression();
	void Interpret(const InterContext &c) override;
private:
	AbstractExpression *_expression;
	int _times;
};

#endif // !INTERPRET_H
