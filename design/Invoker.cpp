#include "Invoker.h"
#include"Command.h"
#include<iostream>

Invoker::Invoker(Command * cmd):_cmd(cmd) {

}

void Invoker::Invoke() {
	_cmd->Excute();
}