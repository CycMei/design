#ifndef MEMENTO_H
#define MEMENTO_H
#include<string>
class Memento;
class Originator {
public:
	std::string State;
	explicit Originator();
	explicit Originator(const std::string &sdt);
	~Originator();
	Memento *createMemento();
	void SetMemento(Memento *men);
	void RestoreToMemento(Memento *men);
	std::string GetState();
	void SetState(const std::string &sdt);
	void PrintState();
private:
	std::string _sdt;
	Memento *_mt;
};


class Memento {
private:
	friend class Originator;
	Memento();
	Memento(const std::string &sdt);
	~Memento();
	void SetState(const std::string &sdt);
	std::string GetState();
private:
	std::string _sdt;
};

#endif