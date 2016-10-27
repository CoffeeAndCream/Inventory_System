#include "InventorySystem.h"
#include <iostream>
#include <fstream>
#include <sstream>

Inventory_System::Inventory_System() {
}
Inventory_System::Inventory_System(std::string name, int id) :
	store_name(name),
	store_id(id) {
}
Inventory_System::~Inventory_System() {
	for (int i = 0; i < item_count; i++) {
		delete ptr_inv_item[i];
	}
}
int Inventory_System::GetStoreId(){
	return store_id;
}
int Inventory_System::GetItemCount(){
	return item_count;
}
std::string Inventory_System::GetStoreName(){
	return store_name;
}

void Inventory_System::BuildInventory() {
	std::ifstream file("C:/Users/Sean/Desktop/Virtual/C++ Classwork/Hulse_Lab2/Hulse_Lab2/products_test.txt", std::ios::in);
	std::string name, quantity, price, condition;
	Inventory_Item *item;

	if (!file) {
		std::cerr << "Error: Failed to open file\n";
		exit(-1);
	}
	else {
		while (!file.eof()) {
			item = new Product();
			Product *product = static_cast <Product*> (item);

			std::getline(file, name, ';');
			product->SetItemName(name);
			std::getline(file, quantity, ';');
			product->SetItemQuantity(stoi(quantity));
			std::getline(file, price, ';');
			product->SetProductPrice(stold(price));
			std::getline(file, condition, '\n');

			switch (condition[0]) {
			case 'D':
				product->SetProductCondition(PC_DEFECTIVE);
				break;
			case 'N':
				product->SetProductCondition(PC_NEW);
				break;
			case 'R':
				product->SetProductCondition(PC_REFURBISHED);
				break;
			case 'U':
				product->SetProductCondition(PC_USED);
				break;
			default:
				product->SetProductCondition(PC_NEW);
				break;
			}

			product->SetProductId(rand() % 10000);

			ptr_inv_item[item_count] = product;
			item_count++;
		}
	}

}
void Inventory_System::ShowInventory() {
	for (int i = 0; i < item_count; i++) {
		Product *temp = static_cast <Product*> (ptr_inv_item[i]);
		temp->Display();
	}
}
void Inventory_System::ShowDefectInventory() {
	for (int i = 0; i < item_count; i++) {
		Product *temp = static_cast <Product*> (ptr_inv_item[i]);
		if (temp->GetProductCondition() == PC_DEFECTIVE) {
			temp->Display();
		}
	}
}

void Inventory_System::Terminate() {
	std::ofstream file;
	std::stringstream ss;

	file.open("C:/Users/Sean/Desktop/Virtual/C++ Classwork/Hulse_Lab2/Hulse_Lab2/example.txt");
	for (int i = 0; i < item_count; i++) {
		Product *temp = static_cast <Product*> (ptr_inv_item[i]);
		file << temp->GetItemName() << ";"
			<< temp->GetItemQuantity() << ";"
			<< temp->GetProductPrice() << ";";

		switch (temp->GetProductCondition()) {
		case PC_DEFECTIVE:
			file << "D\n";
			break;
		case PC_NEW:
			file << "N\n";
			break;
		case PC_REFURBISHED:
			file << "R\n";
			break;
		case PC_USED:
			file << "U\n";
			break;
		default:
			file << "D\n";
			break;
		}
	}
}
