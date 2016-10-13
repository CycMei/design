#ifndef COLLEAGE_H
#define COLLEAGE_H
#include<string>
class Mediator;
class Colleage {
public:
	virtual ~Colleage();
	virtual void Action() = 0;
	virtual void SetState(const std::string &sdt) = 0;
	virtual std::string GetState() = 0;
protected:
	Colleage();
	explicit Colleage(Mediator *mdt);
	Mediator *_mdt;
};

class ConcreteColleageA :public Colleage {
public:
	ConcreteColleageA();
	explicit ConcreteColleageA(Mediator *mdt);
	~ConcreteColleageA();
	void Action() override;
	void SetState(const std::string &sdt) override;
	std::string GetState() override;
private:
	std::string _sdt;
};


class ConcreteColleageB:public Colleage {
public:
	ConcreteColleageB();
	explicit ConcreteColleageB(Mediator *mdt);
	~ConcreteColleageB();
	void Action() override;
	void SetState(const std::string &sdt) override;
	std::string GetState() override;
private:
	std::string _sdt;
};


#endif // !COLLEAGE_H
