#ifndef ABSTRACTION_H
#define ABSTRACTION_H
class AbstractionImp;
class Abstraction {
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;
protected:
	Abstraction();
};
class RefinedAbstraction :public Abstraction {
public:
	explicit RefinedAbstraction(AbstractionImp *imp);
	~RefinedAbstraction();
	void Operation();
private:
	AbstractionImp *_imp;
};

#endif