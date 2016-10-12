#include "State.h"
#include"StateContext.h"
#include<iostream>


State::State() {

}
State::~State() {

}
void State::OperationInterFace(StateContext *con) {
	std::cout << "State..............." << std::endl;
}
bool State::ChangeState(StateContext *con, State *st) {
	con->ChangeState(st);
	return true;
}
void State::OperationChangeState(StateContext *con) {

}



ConcreteStateA::ConcreteStateA() {

}
ConcreteStateA::~ConcreteStateA() {

}
void ConcreteStateA::OperationInterFace(StateContext *con) {
	std::cout << "ConcreteStateA::OperationInterFace............" << std::endl;
}
void ConcreteStateA::OperationChangeState(StateContext *con) {
	OperationInterFace(con);
	ChangeState(con, new ConcreteStateB());
}




ConcreteStateB::ConcreteStateB() {

}
ConcreteStateB::~ConcreteStateB() {

}
void ConcreteStateB::OperationInterFace(StateContext *con) {
	std::cout << "ConcreteStateB::OperationInterFace............" << std::endl;
}
void ConcreteStateB::OperationChangeState(StateContext *con) {
	OperationInterFace(con);
	ChangeState(con, new ConcreteStateA());
}
