#include "Visitor.h"
#include"Element.h"
#include<iostream>


Visitor::Visitor() {

}
Visitor::~Visitor() {

}



ConcreteVisitoraA::ConcreteVisitoraA() {

}
ConcreteVisitoraA::~ConcreteVisitoraA() {

}
void ConcreteVisitoraA::VisitConcreteElementA(Element *elm) {
	std::cout << "i will visit concreteElementA........." << std::endl;
}
void ConcreteVisitoraA::VisitConcreteElementB(Element *elm) {
	std::cout << "i will visit VisitConcreteElementB........." << std::endl;
}



ConcreteVisitoraB::ConcreteVisitoraB() {

}
ConcreteVisitoraB::~ConcreteVisitoraB() {

}
void ConcreteVisitoraB::VisitConcreteElementA(Element *elm) {
	std::cout << "i will visit concreteElementA........." << std::endl;
}
void ConcreteVisitoraB::VisitConcreteElementB(Element *elm) {
	std::cout << "i will visit VisitConcreteElementB........." << std::endl;
}
