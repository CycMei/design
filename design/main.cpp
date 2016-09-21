// 11

#include"Factory.h"
#include"Product.h"
#include"AbstractFactory.h"
#include"Singletom.h"
#include"BuilderProduct.h"
#include"Builder.h"
#include"Director.h"
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
}

void test4() {
	Singleton *sgn = Singleton::Instance();
	delete sgn;
}

void test5() {
	auto temp = new ConcreteBuilder();
	Director *d = new Director(temp);
	d->Construct();
	delete d;
	delete temp;

	
}

void main() {
	test5();
}  