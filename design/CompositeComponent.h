#ifndef COMPOSITECOMPONENT_H
#define COMPOSITECOMPONENT_H
class CompositeComponent {
public:
	CompositeComponent();
	virtual ~CompositeComponent();
	virtual void Operation() = 0;
	virtual void Add(const CompositeComponent&);
	virtual void Remove(const CompositeComponent&);
	virtual CompositeComponent *GetChild(int);
};
#endif
