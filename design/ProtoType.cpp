#include "ProtoType.h"
#include<iostream>

ProtoType::ProtoType() {

}
ProtoType::~ProtoType() {

}
ProtoType *ProtoType::Clone() const {
	return nullptr;
}



ConcreteProtoType::ConcreteProtoType() {

}
ConcreteProtoType::~ConcreteProtoType() {

}
ConcreteProtoType::ConcreteProtoType(const ConcreteProtoType &cp) {
	std::cout << "ConcreteProtoTypev......................." << std::endl;
}
ProtoType *ConcreteProtoType::Clone() const {
	return new ConcreteProtoType(*this);
}

