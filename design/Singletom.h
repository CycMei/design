#ifndef SINGLETON_H
#define SINGLETON_H
#include<iostream>
class Singleton {
public:
	~Singleton();
	static Singleton *Instance();
protected:
	Singleton();
private :
	static Singleton *_instance;
};
#endif