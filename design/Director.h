#ifndef DIRECTOR_H
#define DIRECTOR_H
class Builder;
class Director {
public:
	explicit Director(Builder *bld);
	~Director();
	void Construct();
private:
	Builder *_bld;
};
#endif