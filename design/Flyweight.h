#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H
#include<iostream>
#include<string>
class Flyweight {
public:
	virtual ~Flyweight();
	virtual void Operation(const std::string &extrinsicState);
	std::string GetIntrinsicState();
protected:
	explicit Flyweight(std::string intrinsicState);
private:
	std::string _intrinsicState;
};

class ConcreteFlyweight :public Flyweight {
public:
	explicit ConcreteFlyweight(std::string intrinsicState);
	~ConcreteFlyweight();
	void Operation(const std::string &extrinsicState) override;
};

#endif