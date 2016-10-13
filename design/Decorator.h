#ifndef DECORATOR_H
#define DECORATOR_H
class Component {
public:
	virtual ~Component();
	virtual void Operation();
protected:
	Component();
};
class ConcreteComponent :public Component {
public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operation() override;
};
class Decorator :public Component {
public:
	explicit Decorator(Component *con);
	virtual ~Decorator();
	void Operation() override;
protected:
	Component *_con;
};
class ConcreteDecorator :public Decorator {
public:
	explicit ConcreteDecorator(Component *com);
	~ConcreteDecorator();
	void Operation() override;
	void AddedBehavior();
};
#endif
