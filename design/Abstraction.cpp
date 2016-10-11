#include "Abstraction.h"
#include"AbstractionImp.h"
Abstraction::Abstraction() {

}
Abstraction::~Abstraction() {

}


RefinedAbstraction::RefinedAbstraction(AbstractionImp *imp) :_imp(imp) {

}
RefinedAbstraction::~RefinedAbstraction() {

}
void RefinedAbstraction::Operation() {
	_imp->Operation();
}