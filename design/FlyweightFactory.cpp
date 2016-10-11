#include "FlyweightFactory.h"
#include<iostream>
#include<cassert>
FlyweightFactory::FlyweightFactory() {

}
FlyweightFactory::~FlyweightFactory() {

}

Flyweight *FlyweightFactory::GetFlyweight(const std::string &key) {
	std::vector<Flyweight*>::iterator it = _fly.begin();
	for (; it != _fly.end(); ++it) {
		if ((*it)->GetIntrinsicState() == key) {
			return *it;
		}
	}
	Flyweight *fn = new ConcreteFlyweight(key);
	_fly.push_back(fn);
	return fn;
}
