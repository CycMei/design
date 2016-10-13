#ifndef MEDIATOR_H
#define MEDIATOR_H
class Colleage;
class  Mediator {
public:
	virtual ~Mediator();
	virtual void DoActionFromAtoB() = 0;
	virtual void DoActionFromBtoA() = 0;
protected:
	Mediator();
};

class ConcreteMediator :public Mediator {
public:
	ConcreteMediator();
	ConcreteMediator(Colleage *clgA, Colleage *clgB);
	~ConcreteMediator();
	void SetConcreteMediatorA(Colleage *clgA);
	void SetConcreteMediatorB(Colleage *clgB);
	Colleage *GetConcreteMediatorA();
	Colleage *GetConcreteMediatorB();
	void IntroColleage(Colleage *clgA, Colleage *clgB);
	void DoActionFromAtoB() override;
	void DoActionFromBtoA() override;
private:
	Colleage *_clgA;
	Colleage *_clgB;
};





#endif // !MEDIATOR_H
