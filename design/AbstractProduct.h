#ifndef ABSTRACTTPRODUCT_H
#define ABSTRACTTPRODUCT_H
class AbstractProductA {
public:
	virtual ~AbstractProductA()=0;
protected:
	AbstractProductA();
};
class ProductA1 :public AbstractProductA {
public:
	ProductA1();
	~ProductA1();
};
class ProductA2 :public AbstractProductA {
public:
	ProductA2();
	~ProductA2();
};




class AbstractProductB {
public:
	virtual ~AbstractProductB()=0;
protected:
	AbstractProductB();
};
class ProductB1 :public AbstractProductB {
public:
	ProductB1();
	~ProductB1();
};
class ProductB2 :public AbstractProductB {
public:
	ProductB2();
	~ProductB2();
};

#endif