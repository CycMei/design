#ifndef BUILDERPRODUCT_H
#define BUILDERPRODUCT_H
class BuilderProduct {
public:
	BuilderProduct();
	~BuilderProduct();
	void ProducePart();
};

class ProductPart {
public:
	ProductPart();
	~ProductPart();
	ProductPart *BuildPart();
};
#endif

