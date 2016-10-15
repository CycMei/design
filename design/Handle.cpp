#include "Handle.h"
#include<iostream>

Handle::Handle() {

}
Handle::~Handle() {

}
Handle::Handle(Handle *succ):_succ(succ) {
}
void Handle::SetSuccessor(Handle *succ) {
	_succ = succ;
}
Handle *Handle::GetSuccessor() {
	return _succ;
}
void Handle::HandleRequest() {

}



ConcreteHandleA::ConcreteHandleA() {

}
ConcreteHandleA::~ConcreteHandleA() {

}
ConcreteHandleA::ConcreteHandleA(Handle *succ) :Handle(succ) {

}
void ConcreteHandleA::HandleRequest() {
	if (this->GetSuccessor()) {
		std::cout << ".one.....next node........" << std::endl;
		GetSuccessor()->HandleRequest();
	}
	else {

	}
}




ConcreteHandleB::ConcreteHandleB() {

}
ConcreteHandleB::~ConcreteHandleB() {

}
ConcreteHandleB::ConcreteHandleB(Handle *succ) :Handle(succ) {

}
void ConcreteHandleB::HandleRequest() {
	if (this->GetSuccessor()) {
		std::cout << ".two.............next node........" << std::endl;
		GetSuccessor()->HandleRequest();
	}
	else {

	}
}
