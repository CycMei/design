#ifndef SUBJECT_H
#define SUBJECT_H
#include<list>
#include<string>
class Observer;
class OBSubject {
public:
	virtual ~OBSubject();
	virtual void Attach(Observer *obv);
	virtual void Detach(Observer *obv);
	virtual void Notify();
	virtual void SetState(const std::string &st) = 0;
	virtual std::string GetState() = 0;
protected:
	OBSubject();
private:
	std::list<Observer*> *_obvs;
};


class SubConcreteSubject :public OBSubject {
public:
	SubConcreteSubject();
	~SubConcreteSubject();
	std::string GetState() override;
	void SetState(const std::string &st) override;
private:
	std::string _st;
};


#endif