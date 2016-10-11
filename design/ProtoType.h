#ifndef PROTOTYPE_H
#define PROTOTYPE_H
class ProtoType {
public:
	virtual ~ProtoType();
	virtual ProtoType *Clone() const = 0;
protected:
	ProtoType();
};
class ConcreteProtoType :public::ProtoType {
public:
	ConcreteProtoType();
	ConcreteProtoType(const ConcreteProtoType &cp);
	~ConcreteProtoType();
	ProtoType *Clone() const;
};
#endif