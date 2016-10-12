#include "Context.h"
#include"Strategy.h"
#include<iostream>

Context::Context(Strategy * stg):_stg(stg) {

}
Context::~Context() {
	if (_stg)
		delete _stg;
}
void Context::DoAction() {
	_stg->AlgrithmInterface();
}