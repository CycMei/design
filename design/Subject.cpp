#include"Subject.h"
#include"Observer.h"
#include<iostream>
OBSubject::OBSubject() :_obvs(new std::list<Observer*>) {

}
OBSubject::~OBSubject() {
}
void OBSubject::Attach(Observer *obv) {
	_obvs->push_front(obv);
}
void OBSubject::Detach(Observer *obv) {
	if (obv)
		_obvs->remove(obv);
}
void OBSubject::Notify() {
	std::list<Observer*>::iterator it = _obvs->begin();
	std::cout << this << std::endl;
	for (; it != _obvs->end(); ++it) {
		(*it)->Update(this);
	}
}



SubConcreteSubject::SubConcreteSubject() :_st("\0") {

}
SubConcreteSubject::~SubConcreteSubject() {

}
std::string SubConcreteSubject::GetState() {
	return _st;
}
void SubConcreteSubject::SetState(const std::string &st) {
	_st = st;
}
