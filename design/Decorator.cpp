#include "Decorator.h"
#include<iostream>
#include "CompositeComponent.h"

Component::Component() {

}
Component::~Component() {

}
void Component::Operation() {

}






ConcreteComponent::ConcreteComponent() {

}
ConcreteComponent::~ConcreteComponent() {

}
void ConcreteComponent::Operation() {
	std::cout << "ConcreteComponent..........operation...." << std::endl;
}



Decorator::Decorator(Component * con):_con(con) {

}
Decorator::~Decorator() {
	delete _con;
}
void Decorator::Operation() {

}



ConcreteDecorator::ConcreteDecorator(Component *com):Decorator(com) {

}
ConcreteDecorator::~ConcreteDecorator() {

}
void ConcreteDecorator::AddedBehavior() {
	std::cout << "ConcreteDecorator......AddedBehavior......" << std::endl;
}
void ConcreteDecorator::Operation() {
	_con->Operation();
	this->AddedBehavior();
}