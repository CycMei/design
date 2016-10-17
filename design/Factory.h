#ifndef FACTORY_H
#define FACTORY_H
#include<iostream>
template<typename MProduct> class Factory {
public:
	virtual ~Factory() = 0;
	virtual MProduct *CreateProduct() = 0;
protected:
	Factory();
};

template<typename MProduct> class ConcreteFactory :public Factory<MProduct> {
public:
	~ConcreteFactory();
	ConcreteFactory();
	MProduct *CreateProduct() override;
};


template<typename MProduct> Factory<MProduct>::Factory() {

}
template<typename MProduct> Factory<MProduct>::~Factory() {

}




template<typename MProduct> ConcreteFactory<MProduct>::ConcreteFactory() {
	std::cout << "ConcreteFactory.............." << std::endl;
}
template<typename MProduct> ConcreteFactory<MProduct>::~ConcreteFactory() {

}
template<typename MProduct> MProduct *ConcreteFactory<MProduct>::CreateProduct() {
	return new ConcreteProduct();
}

#endif