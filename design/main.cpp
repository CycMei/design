//// 126

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
#include"Template.h"
#include"Strategy.h"
#include"Context.h"
#include"State.h"
#include"StateContext.h"
#include"Subject.h"
#include"Observer.h"
#include"Memento.h"
#include"Mediator.h"
#include"Colleage.h"
#include"Command.h"
#include"Invoker.h"
#include"Reciever.h"
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

void test14() {
	AbstractClass *p1 = new ConcreteClass1();
	AbstractClass *p2 = new ConcreteClass2();
	p1->TemplateMethod();
	p2->TemplateMethod();
	delete p2;
	delete p1;
	//class AA {
	//public:
	//	void diss() {
	//		std::cout << this << std::endl;
	//	}
	//};
	//AA a;
	//std::cout << &a << std::endl;
	//a.diss();
}

void test15() {
	Strategy *ps = new ConcreteStrategyA();
	Context *pc = new Context(ps);
	pc->DoAction();
	if (pc)
		delete pc;
}

void test16() {
	State *st = new ConcreteStateA();
	StateContext *con = new StateContext(st);
	con->OperationChangeState();
	con->OperationChangeState();
	con->OperationChangeState();
	delete con;
}

void test17() {
	//SubConcreteSubject *sub = new SubConcreteSubject();
	//Observer *o1 = new ConcreteObserverA(sub);
	//Observer *o2 = new ConcreteObserverB(sub);
	//sub->SetState("old");
	//sub->Notify();
	//sub->SetState("new");
	//sub->Notify();
	//delete o2;
	//o2 = nullptr;
}

void test18() {
	Originator *o = new Originator();
	o->SetState("old");
	o->PrintState();

	Memento *m = o->createMemento();
	o->SetState("new");
	o->PrintState();
	o->RestoreToMemento(m);
	o->PrintState();

	delete o;
	o = nullptr;
}

void test19() {
	ConcreteMediator *m = new ConcreteMediator();

	ConcreteColleageA *c1 = new ConcreteColleageA(m);
	ConcreteColleageB *c2 = new ConcreteColleageB(m);

	m->IntroColleage(c1, c2);

	c1->SetState("old");
	c2->SetState("new");
	c1->Action();
	c2->Action();
	std::cout << std::endl;

	c1->SetState("new");
	c1->Action();
	c2->Action();
	std::cout << std::endl;

	c2->SetState("old");
	c2->Action();
	c1->Action();

	delete c1;
	delete c2;
	delete m;
}

void test20() {
	Reciever *rev = new Reciever();
	Command *cmd = new ConcreteCommand(rev);
	Invoker *inv = new Invoker(cmd);
	inv->Invoke();
	delete rev;
}

void main() {
	test20();
}