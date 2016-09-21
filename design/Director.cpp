#include "Director.h"
#include"Builder.h"

Director::Director(Builder * bld):_bld(bld) {

}

Director::~Director() {
	//if(_bld)
	//	delete _bld;
	//_bld = nullptr;
}
void Director::Construct() {
	_bld->BuildPartA("one");
	_bld->BuildPartB("one");
	_bld->BuildPartC("one");
}
