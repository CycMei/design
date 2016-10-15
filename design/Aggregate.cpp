#include "Aggregate.h"
#include"Iterator.h"
#include<iostream>

Aggregate::Aggregate() {

}
Aggregate::~Aggregate() {

}



ConcreteAggregate::ConcreteAggregate() {
	for (int i = 0; i < SIZE; ++i) {
		_objs[i] = i;
	}
}
ConcreteAggregate::~ConcreteAggregate() {

}
Iterator *ConcreteAggregate::CreteIterator() {
	return new ConcreteIterator(this);
}
int ConcreteAggregate::GetItem(int idx) {
	if (idx < GetSize()) {
		return _objs[idx];
	}
	else {
		return -1;
	}
}
int ConcreteAggregate::GetSize() {
	return SIZE;
}