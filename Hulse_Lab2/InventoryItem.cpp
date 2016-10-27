#include "InventoryItem.h"
#include <iostream>
Inventory_Item::Inventory_Item(){
}
Inventory_Item::Inventory_Item(std::string name, int quantity) :
	item_name(name),
	item_quantity(quantity) {
}
Inventory_Item::~Inventory_Item() {
	std::cout << "Inventory Item " << item_name << " with " << item_quantity << " item(s) destroyed.\n";
}

std::string Inventory_Item::GetItemName() const {
	return item_name;
}
int Inventory_Item::GetItemQuantity() const {
	return item_quantity;
}

void Inventory_Item::SetItemName(std::string name) {
	item_name = name;
}
void Inventory_Item::SetItemQuantity(int quantity) {
	item_quantity = quantity;
}

void Inventory_Item::Display() const {
	std::cout << item_name << " (" << item_quantity << ") ";
}