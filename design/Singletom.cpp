#include "Singletom.h"

Singleton *Singleton::_instance = 0;
Singleton::Singleton() {
	std::cout << "Singleton..........." << std::endl;
}
Singleton::~Singleton() {
}
Singleton *Singleton::Instance() {
	if (!_instance) {
		_instance = new Singleton();
	}
	return _instance;
}
