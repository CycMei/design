#include "Proxy.h"
#include<iostream>

Subject::Subject() {

}
Subject::~Subject() {

}


ConcreteSubject::ConcreteSubject() {

}
ConcreteSubject::~ConcreteSubject() {

}

void ConcreteSubject::Request() {
	std::cout << "ConcreteSubject..........request...." << std::endl;
}



Proxy::Proxy() {

}
Proxy::Proxy(Subject *sub) :_sub(sub)
{

}
Proxy::~Proxy() {
	delete _sub;
}
void Proxy::Request() {
	std::cout << "proxy ....request...." << std::endl;
	_sub->Request();
}

