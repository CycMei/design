#ifndef ITERATOR_H
#define ITERATOR_H
class Aggregate;
class Iterator {
public:
	virtual ~Iterator();
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual int CurrentItem() = 0;
protected:
	Iterator();
};


class ConcreteIterator :public Iterator {
public:
	ConcreteIterator(Aggregate *ag, int idx = 0);
	~ConcreteIterator();
	void First() override;
	void Next() override;
	bool IsDone() override;
	int CurrentItem() override;
private:
	Aggregate *_ag;
	int _idx;
};

#endif // !ITERATOR_H
