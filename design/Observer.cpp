#include "Observer.h"
#include"Subject.h"
#include<iostream>

Observer::Observer() :_st('\0') {

}

Observer::~Observer() {

}


ConcreteObserverA::ConcreteObserverA(OBSubject *sub) :_sub(sub) {
	_sub->Attach(this);
}
ConcreteObserverA::~ConcreteObserverA() {
	_sub->Detach(this);
	if (_sub)
		delete _sub;
}
OBSubject *ConcreteObserverA::GetSubject() {
	return _sub;
}
void ConcreteObserverA::PrintInfo() {
	std::cout << "ConcreteObserverA...observer......" << _sub->GetState() << std::endl;
}
void ConcreteObserverA::Update(OBSubject *sub) {
	_st = sub->GetState();
	PrintInfo();
}




ConcreteObserverB::ConcreteObserverB(OBSubject *sub) :_sub(sub) {
	_sub->Attach(this);
}
ConcreteObserverB::~ConcreteObserverB() {
	_sub->Detach(this);
	if (_sub)
		delete _sub;
}
OBSubject *ConcreteObserverB::GetSubject() {
	return _sub;
}
void ConcreteObserverB::PrintInfo() {
	std::cout << "ConcreteObserverB...observer......" << _sub->GetState() << std::endl;
}
void ConcreteObserverB::Update(OBSubject *sub) {
	_st = sub->GetState();
	PrintInfo();
}

