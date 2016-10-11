#ifndef PROXY_H
#define PROXY_H
class Subject {
public:
	virtual ~Subject();
	virtual void Request() = 0;
protected:
	Subject();
};
class ConcreteSubject :public Subject {
public:
	ConcreteSubject();
	~ConcreteSubject();
	void Request() override;
};
class Proxy {
public:
	Proxy();
	explicit Proxy(Subject *sub);
	~Proxy();
	void Request();
private:
	Subject *_sub;
};
#endif