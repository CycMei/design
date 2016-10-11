#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H
#include"Flyweight.h"
#include<vector>
#include<string>
class FlyweightFactory {
public:
	FlyweightFactory();
	~FlyweightFactory();
	Flyweight *GetFlyweight(const std::string &key);
private:
	std::vector<Flyweight*> _fly;
};
#endif
