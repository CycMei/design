#ifndef STATE_H
#define STATE_H
class StateContext;
class State {
public:
	State();
	virtual ~State();
	virtual void OperationInterFace(StateContext*) = 0;
	virtual void OperationChangeState(StateContext*) = 0;
protected:
	bool ChangeState(StateContext *con, State *st);
};


class ConcreteStateA :public State {
public:
	ConcreteStateA();
	virtual ~ConcreteStateA();
	void OperationInterFace(StateContext*) override;
	void OperationChangeState(StateContext*) override;
};


class ConcreteStateB :public State {
public:
	ConcreteStateB();
	virtual ~ConcreteStateB();
	void OperationInterFace(StateContext*) override;
	void OperationChangeState(StateContext*) override;
};

#endif