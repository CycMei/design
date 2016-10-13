#ifndef OBSERVER_H
#define OBSERVER_H
#include"Subject.h"

class Observer {
public:
	virtual ~Observer();
	virtual void Update(OBSubject *sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
	std::string _st;
};

class ConcreteObserverA :public Observer {
public:
	virtual OBSubject *GetSubject();
	explicit ConcreteObserverA(OBSubject *sub);
	virtual ~ConcreteObserverA();
	void Update(OBSubject *sub) override;
	void PrintInfo() override;
private:
	OBSubject *_sub;
};


class ConcreteObserverB :public Observer {
public:
	virtual OBSubject *GetSubject();
	explicit ConcreteObserverB(OBSubject *sub);
	virtual ~ConcreteObserverB();
	void Update(OBSubject *sub) override;
	void PrintInfo() override;
private:
	OBSubject *_sub;
};





#endif // !OBSERVER_H
