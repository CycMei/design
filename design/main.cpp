// 11

#include"Factory.h"
#include"Product.h"
#include"AbstractFactory.h"
#include<vld.h>
#include<iostream>
void test1() {
	Factory *fac = new ConcreteFactory();
	Product *pro = fac->CreateProduct();
	delete pro;
	pro = nullptr;
	delete fac;
	fac = nullptr;
}
void test3() {
	AbstractFactory *cf1 = new ConcreteFactory1();
	auto A=cf1->CreateProductA();
	auto B=cf1->CreateProductB();
	delete A;
	delete B;
	delete cf1;

	//AbstractFactory *cf2 = new ConcreteFactory2();
	//cf2->CreateProductA();
	//cf2->CreateProductB();
}
void main() {
	test3();
}  