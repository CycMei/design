#ifndef BUILDER_H
#define BUILDER_H
#include<string>
class BuilderProduct;
class Builder {
public:
	virtual ~Builder();
	virtual void BuildPartA(const std::string &buildPara) = 0;
	virtual void BuildPartB(const std::string &buildPara) = 0;
	virtual void BuildPartC(const std::string &buildPara) = 0;
	virtual BuilderProduct *GetProduct() = 0;
protected:
	Builder();
};


class ConcreteBuilder :public Builder {
public:
	ConcreteBuilder();
	~ConcreteBuilder();
	virtual void BuildPartA(const std::string &buildPara) override;
	virtual void BuildPartB(const std::string &buildPara) override;
	virtual void BuildPartC(const std::string &buildPara) override;
	virtual BuilderProduct *GetProduct() override;
};
#endif
