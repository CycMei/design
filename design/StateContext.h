#ifndef STATECONTEXT_H
#define STATECONTEXT_H
class State;
class StateContext {
public:
	StateContext();
	StateContext(State *state);
	~StateContext();
	void OperationInterface();
	void OperationChangeState();
private:
	friend class State;
	bool ChangeState(State *state);
	State *_state;
};
#endif