#ifndef HANDLE_H
#define HANDLE_H
class Handle {
public:
	virtual ~Handle();
	virtual void HandleRequest() = 0;
	void SetSuccessor(Handle *succ);
	Handle *GetSuccessor();
protected:
	Handle();
	explicit Handle(Handle *succ);
private:
	Handle *_succ;
};

class ConcreteHandleA :public Handle {
public:
	ConcreteHandleA();
	~ConcreteHandleA();
	explicit ConcreteHandleA(Handle *succ);
	void HandleRequest() override;
};


class ConcreteHandleB :public Handle {
public:
	ConcreteHandleB();
	~ConcreteHandleB();
	explicit ConcreteHandleB(Handle *succ);
	void HandleRequest() override;
};


#endif