#ifndef CONTEXT_H
#define CONTEXT_H
class Strategy;
class Context {
public:
	explicit Context(Strategy *stg);
	~Context();
	void DoAction();
private:
	Strategy *_stg;
};
#endif