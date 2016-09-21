#include "BuilderProduct.h"
#include<iostream>
BuilderProduct::BuilderProduct() {
	ProducePart();
	std::cout << "return a product........" << std::endl;
}
BuilderProduct::~BuilderProduct() {

}
void BuilderProduct::ProducePart() {
	std::cout << "build part of product...." << std::endl;
}


ProductPart::ProductPart() {

}
ProductPart::~ProductPart() {

}
ProductPart *ProductPart::BuildPart() {
	return new ProductPart();
}
