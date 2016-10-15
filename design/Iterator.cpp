#include "Iterator.h"
#include"Aggregate.h"
#include<iostream>

Iterator::Iterator() {

}
Iterator::~Iterator() {

}
ConcreteIterator::ConcreteIterator(Aggregate *ag, int idx) :_ag(ag), _idx(idx) {

}
ConcreteIterator::~ConcreteIterator() {

}
int ConcreteIterator::CurrentItem() {
	return _ag->GetItem(_idx);
}
void ConcreteIterator::First() {
	_idx = 0;
}
void ConcreteIterator::Next() {
	if (_idx < _ag->GetSize()) {
		++_idx;
	}
}
bool ConcreteIterator::IsDone() {
	return (_idx == _ag->GetSize());
}
