// 11

#include"Factory.h"
#include"Product.h"
#include<vld.h>
#include<iostream>
void test1() {
	Factory *fac = new ConcreteFactory();
	Product *pro = fac->CreateProduct();
	delete fac;
	fac = nullptr;
	delete pro;
	pro = nullptr;
}
void main() {
	test1();
}  