#include "Memento.h"
#include<iostream>

Originator::Originator() :_sdt(""), _mt(nullptr) {

}
Originator::Originator(const std::string &sdt) : _sdt(sdt), _mt(nullptr) {

}
Originator::~Originator() {
	if (_mt) {
		delete _mt;
		_mt = nullptr;
	}
}
Memento *Originator::createMemento() {
	_mt = new Memento(_sdt);
	return _mt;
}
std::string Originator::GetState() {
	return _sdt;
}
void Originator::SetState(const std::string &sdt) {
	_sdt = sdt;
}
void Originator::PrintState() {
	std::cout << this->_sdt << "......." << std::endl;
}
void Originator::SetMemento(Memento *men) {

}
void Originator::RestoreToMemento(Memento *mt) {
	_sdt = mt->GetState();
}






Memento::Memento() {

}
Memento::Memento(const std::string &sdt) :_sdt(sdt) {

}
std::string Memento::GetState() {
	return _sdt;
}
void Memento::SetState(const std::string &sdt) {
	_sdt = sdt;
}
Memento::~Memento() {

}
