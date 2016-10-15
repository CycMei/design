#ifndef VISITOR_H
#define VISITOR_H
class ConcreteElementA;
class ConcreteElementB;
class Element;
class Visitor {
public:
	virtual ~Visitor();
	virtual void VisitConcreteElementA(Element *elm) = 0;
	virtual void VisitConcreteElementB(Element *elm) = 0;
protected:
	Visitor();
};

class ConcreteVisitoraA :public Visitor {
public:
	ConcreteVisitoraA();
	virtual ~ConcreteVisitoraA();
	void VisitConcreteElementA(Element *elm) override;
	void VisitConcreteElementB(Element *elm) override;
};

class ConcreteVisitoraB :public Visitor {
public:
	ConcreteVisitoraB();
	virtual ~ConcreteVisitoraB();
	void VisitConcreteElementA(Element *elm) override;
	void VisitConcreteElementB(Element *elm) override;
};


#endif