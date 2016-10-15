#include "Element.h"
#include"Visitor.h"
#include<iostream>

Element::Element() {

}
Element::~Element() {

}
void Element::Accept(Visitor *vis) {

}


ConcreteElementA::ConcreteElementA() {

}
ConcreteElementA::~ConcreteElementA() {

}
void ConcreteElementA::Accept(Visitor *vis) {
	vis->VisitConcreteElementA(this);
	std::cout << "VisitConcreteElementA...." << std::endl;
}


ConcreteElementB::ConcreteElementB() {

}
ConcreteElementB::~ConcreteElementB() {

}
void ConcreteElementB::Accept(Visitor *vis) {
	std::cout << "VisitConcreteElementB.." << std::endl;
	vis->VisitConcreteElementB(this);
}

