#include "Command.h"
#include"Reciever.h"
#include<iostream>

Command::Command() {

}
Command::~Command() {

}
void Command::Excute() {

}



ConcreteCommand::ConcreteCommand(Reciever *rev):_rev(rev) {

}
ConcreteCommand::~ConcreteCommand() {
	if (_rev) {
		delete _rev;
		_rev = nullptr;
	}
}
void ConcreteCommand::Excute() {
	_rev->Action();
	std::cout << "ConcreteCommand............." << std::endl;
}