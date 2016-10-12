#include "Strategy.h"
#include<iostream>


Strategy::Strategy() {

}
Strategy::~Strategy() {
	std::cout << "~....Strategy......" << std::endl;

}
void Strategy::AlgrithmInterface() {

}


ConcreteStrategyA::ConcreteStrategyA() {
	
}
ConcreteStrategyA::~ConcreteStrategyA() {
	std::cout << "~....ConcreteStrategyA......" << std::endl;
}
void ConcreteStrategyA::AlgrithmInterface() {
	std::cout << "~....ConcreteStrategyA...... AlgrithmInterface......" << std::endl;
}



ConcreteStrategyB::ConcreteStrategyB() {

}
ConcreteStrategyB::~ConcreteStrategyB() {
	std::cout << "~....ConcreteStrategyB......" << std::endl;
}
void ConcreteStrategyB::AlgrithmInterface() {
	std::cout << "~....ConcreteStrategyB...... AlgrithmInterface......" << std::endl;
}