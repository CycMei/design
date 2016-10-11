#include "Composite.h"

Composite::Composite() {

}
Composite::~Composite() {

}
void Composite::Operation() {
	std::vector<CompositeComponent*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end(); ++comIter) {
		(*comIter)->Operation();
	}
}
void Composite::Add(CompositeComponent *com) {
	comVec.push_back(com);
}

void Composite::Remove(CompositeComponent *com) {
	//comVec.erase(com);
}

CompositeComponent * Composite::GetChild(int index) {
	return comVec[index];
}
