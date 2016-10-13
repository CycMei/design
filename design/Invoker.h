#ifndef INVOKER_H
#define INVOKER_H
class Command;
class Invoker {
public:
	Invoker(Command *cmd);
	~Invoker() {
		delete _cmd;
	}
	void Invoke();
private:
	Command *_cmd;
};
#endif // !INVOKER_H
