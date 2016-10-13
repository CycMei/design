#ifndef COMMAND_H
#define COMMAND_H
class Reciever;
class Command {
public:
	virtual ~Command();
	virtual void Excute() = 0;
protected:
	Command();
};

class ConcreteCommand :public Command {
public:
	ConcreteCommand(Reciever*);
	~ConcreteCommand();
	void Excute() override;
private:
	Reciever *_rev;
};

#endif // !COMMAND_H
