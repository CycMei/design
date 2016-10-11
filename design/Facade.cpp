#include "Facade.h"
#include<iostream>

Subsystem1::Subsystem1() {

}
Subsystem1::~Subsystem1() {

}
void Subsystem1::Operation() {
	std::cout << "Subsystem1...operation........" << std::endl;
}


Subsystem2::Subsystem2() {

}
Subsystem2::~Subsystem2() {

}
void Subsystem2::Operation() {
	std::cout << "Subsystem2...operation........" << std::endl;
}




Facade::Facade() :_subs1(new Subsystem1()), _subs2(new Subsystem2()) {
	//_subs1 = new Subsystem1();
	//_subs2 = new Subsystem2();
}
Facade::~Facade() {
	delete _subs1;
	delete _subs2;
}
void Facade::OperationWrapper() {
	_subs1->Operation();
	_subs2->Operation();
}
