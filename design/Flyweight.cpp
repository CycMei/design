#include "Flyweight.h"
#include<iostream>
Flyweight::Flyweight(std::string intrinsicState):_intrinsicState(intrinsicState){

}
Flyweight::~Flyweight() {

}
void Flyweight::Operation(const std::string & extrinsicState) {

}
std::string Flyweight::GetIntrinsicState() {
	return _intrinsicState;
}




ConcreteFlyweight::ConcreteFlyweight(std::string intrinsicState):Flyweight(intrinsicState) {
	std::cout << "ConcreteFlyweight bulid................" << intrinsicState << std::endl;
}
ConcreteFlyweight::~ConcreteFlyweight() {

}
void ConcreteFlyweight::Operation(const std::string &extrinsicSate) {

}