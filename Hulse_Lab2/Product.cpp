#include "Product.h"
#include <iostream>
#include <iomanip>

Product::Product() : 
	Inventory_Item(),
	product_id(0),
	product_price(0.0){
}
Product::Product(std::string name, int quantity) :
	Inventory_Item(name, quantity),
	product_id(rand()% 1000),
	product_price(100.0 * ((rand() + 1) / double(RAND_MAX + 2))){
}

Product::~Product() {
	std::cout << "Product " << product_id << " priced $" << product_price << " has been destroyed.";
}

int Product::GetProductId() const {
	return product_id;
}
double Product::GetProductPrice() const {
	return product_price;
}
T_Condition Product::GetProductCondition() const {
	return condition_;
}

void Product::SetProductId(int id){
	product_id = id;
}
void Product::SetProductPrice(double price) {
	product_price = price;
}
void Product::SetProductCondition(T_Condition condition) {
	condition_ = condition;
}

void Product::Display() const{
	Inventory_Item::Display();
	std::cout << product_id << " $" << std::setprecision(4) << product_price << '\n';
}