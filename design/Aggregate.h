#ifndef AGGREGATE_H
#define AGGREGATE_H
class Iterator;
class Aggregate {
public:
	virtual ~Aggregate();
	virtual Iterator *CreteIterator() = 0;
	virtual int GetItem(int idx) = 0;
	virtual int GetSize() = 0;
protected:
	Aggregate();
};

class ConcreteAggregate :public Aggregate {
public:
	enum {
		SIZE = 3
	};
	ConcreteAggregate();
	~ConcreteAggregate();
	Iterator *CreteIterator() override;
	int GetItem(int idx) override;
	int GetSize();
private:
	int _objs[SIZE];
};



#endif // !AGGREGATE_H
