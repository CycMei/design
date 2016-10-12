#ifndef TEMPLATE_H
#define TEMPLATE_H
class AbstractClass {
public:
	virtual ~AbstractClass();
	void TemplateMethod();
protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	
	AbstractClass();
};




class ConcreteClass1 :public AbstractClass {
public:
	ConcreteClass1();
	~ConcreteClass1();
protected:
	void PrimitiveOperation1() override;
	void PrimitiveOperation2() override;
};




class ConcreteClass2:public AbstractClass {
public:
	ConcreteClass2();
	~ConcreteClass2();
protected:
	void PrimitiveOperation1() override;
	void PrimitiveOperation2() override;
};
#endif