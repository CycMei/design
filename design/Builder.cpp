#include "Builder.h"
#include"BuilderProduct.h"
#include<iostream>

Builder::~Builder() {
}
Builder::Builder() {

}





ConcreteBuilder::ConcreteBuilder() {

}
ConcreteBuilder::~ConcreteBuilder() {

}

void ConcreteBuilder::BuildPartA(const std::string & buildPara) {
	std::cout << "1.....A...." <<buildPara<< std::endl;
}

void ConcreteBuilder::BuildPartB(const std::string & buildPara) {
	std::cout << "1.....B...." << buildPara << std::endl;
}

void ConcreteBuilder::BuildPartC(const std::string & buildPara) {
	std::cout << "1.....C...." << buildPara << std::endl;
}

BuilderProduct * ConcreteBuilder::GetProduct() {
	BuildPartA("one");
	BuildPartB("one");
	BuildPartC("one");
	return new BuilderProduct();
}
