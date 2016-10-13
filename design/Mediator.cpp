#include "Mediator.h"
#include "Colleage.h"


Mediator::Mediator() {

}
Mediator::~Mediator() {

}





ConcreteMediator::ConcreteMediator() {

}
ConcreteMediator::~ConcreteMediator() {

}

ConcreteMediator::ConcreteMediator(Colleage *clgA, Colleage *clgB) :_clgA(clgA), _clgB(clgB) {

}
void ConcreteMediator::DoActionFromAtoB() {
	_clgB->SetState(_clgA->GetState());
}
void ConcreteMediator::DoActionFromBtoA() {
	_clgA->SetState(_clgB->GetState());
}
void ConcreteMediator::SetConcreteMediatorA(Colleage *clgA) {
	_clgA = clgA;
}
void ConcreteMediator::SetConcreteMediatorB(Colleage *clgB) {
	_clgB = clgB;
}
Colleage *ConcreteMediator::GetConcreteMediatorA() {
	return _clgA;
}
Colleage *ConcreteMediator::GetConcreteMediatorB() {
	return _clgB;
}
void ConcreteMediator::IntroColleage(Colleage *clgA, Colleage *clgB) {
	_clgA = clgA;
	_clgB = clgB;
}