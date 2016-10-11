#ifndef LEAF_H
#define LEAF_H
#include"Composite.h"
class Leaf:public CompositeComponent {
public:
	Leaf();
	~Leaf();
	void Operation() override;
};
#endif

