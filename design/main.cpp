// 74

#include"Factory.h"
#include"Product.h"
#include"AbstractFactory.h"
#include"Singletom.h"
#include"BuilderProduct.h"
#include"Builder.h"
#include"Director.h"
#include"ProtoType.h"
#include"Abstraction.h"
#include"AbstractionImp.h"
#include"Adapter.h"
#include"Decorator.h"
#include"CompositeComponent.h"
#include"Composite.h"
#include"Leaf.h"
#include"Flyweight.h"
#include"FlyweightFactory.h"
#include"Facade.h"
#include"Proxy.h"
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

void test6() {
	ProtoType *p = new ConcreteProtoType();
	ProtoType *p1 = p->Clone();
	delete p1;
	delete p;
}

void test7() {
	AbstractionImp *imp = new ConcreteAbstractionImpA();
	Abstraction *abs = new RefinedAbstraction(imp);
	abs->Operation();
	delete abs;
	delete imp;
}

void test8() {
	Target *adt = new Adapter();
	adt->Request();
	delete adt;
}

void test9() {
	Component *com = new ConcreteComponent();
	Decorator *dec = new ConcreteDecorator(com);
	dec->Operation();
	delete dec;
}

void test10() {
	CompositeComponent *l = new Leaf();
	l->Operation();
	CompositeComponent *com = new Composite();
	delete l;
	delete com;
	//com->Add(l);
	//com->Operation();
	//CompositeComponent *ll = com->GetChild(0);
	//ll->Operation();
}

void test11() {
	FlyweightFactory *fc = new FlyweightFactory();
	Flyweight *fw1 = fc->GetFlyweight("hello");
	delete fc;
	delete fw1;
}

void test12() {
	Facade *f = new Facade();
	f->OperationWrapper();
	delete f;
}

void test13() {
	Subject *sub = new ConcreteSubject();
	Proxy *p = new Proxy(sub);
	p->Request();
	delete p;
}

void main() {
	test13();
}  