#ifndef STRATEGY_H
#define STRATEGY_H
class Strategy {
public:
	Strategy();
	virtual ~Strategy();
	virtual void AlgrithmInterface() = 0;
};


class ConcreteStrategyA :public Strategy {
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();
	void AlgrithmInterface() override;
};


class ConcreteStrategyB :public Strategy {
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();
	void AlgrithmInterface() override;
};


#endif