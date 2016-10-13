#include "Colleage.h"
#include "Mediator.h";
#include <iostream>

Colleage::Colleage() {

}
Colleage::Colleage(Mediator *mdt) :_mdt(mdt) {

}
Colleage::~Colleage() {

}




ConcreteColleageA::ConcreteColleageA() {

}
ConcreteColleageA::~ConcreteColleageA() {

}
ConcreteColleageA::ConcreteColleageA(Mediator *mdt) :Colleage(mdt) {

}
std::string ConcreteColleageA::GetState() {
	return _sdt;
}
void ConcreteColleageA::SetState(const std::string &sdt) {
	_sdt = sdt;
}
void ConcreteColleageA::Action() {
	_mdt->DoActionFromAtoB();
	std::cout << "state of ConcreteColleageA:  " << this->GetState() << std::endl;
}




ConcreteColleageB::ConcreteColleageB() {

}
ConcreteColleageB::~ConcreteColleageB() {

}
ConcreteColleageB::ConcreteColleageB(Mediator *mdt) :Colleage(mdt) {

}
std::string ConcreteColleageB::GetState() {
	return _sdt;
}
void ConcreteColleageB::SetState(const std::string &sdt) {
	_sdt = sdt;
}
void ConcreteColleageB::Action() {
	_mdt->DoActionFromBtoA();
	std::cout << "state of ConcreteColleageB:  " << this->GetState() << std::endl;
}