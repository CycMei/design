#ifndef ELEMENT_H
#define ELEMENT_H
class Visitor;
class Element {
public:
	virtual ~Element();
	virtual void Accept(Visitor *vis) = 0;
protected:
	Element();
};

class ConcreteElementA :public Element {
public:
	ConcreteElementA();
	~ConcreteElementA();
	void Accept(Visitor *vis) override;
};


class ConcreteElementB :public Element {
public:
	ConcreteElementB();
	~ConcreteElementB();
	void Accept(Visitor *vis) override;
};

#endif