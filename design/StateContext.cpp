#include "StateContext.h"
#include"State.h"

StateContext::StateContext() {

}
StateContext::StateContext(State *state):_state(state) {

}
StateContext::~StateContext() {
	if(_state)
		delete _state;
}
void StateContext::OperationInterface() {
	_state->OperationInterFace(this);
}
bool StateContext::ChangeState(State *state) {
	if (_state) {
		delete _state;
		_state = nullptr;
	}
	_state = state;
	return true;
}
void StateContext::OperationChangeState() {
	_state->OperationChangeState(this);
}