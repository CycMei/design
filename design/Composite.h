#ifndef COMPOSITE_H
#define COMPOSITE_H
#include"CompositeComponent.h"
#include<vector>
class Composite :public CompositeComponent {
public:
	Composite();
	~Composite();
	void Operation() override;
	void Add(CompositeComponent*);
	void Remove(CompositeComponent*);
	CompositeComponent *GetChild(int);
private:
	std::vector<CompositeComponent*> comVec;
};
#endif
