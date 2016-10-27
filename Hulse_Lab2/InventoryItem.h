#ifndef INVENTORY_ITEM_H
#define INVENTORY_ITEM_H
#include <string>

class Inventory_Item {
public:
	Inventory_Item();
	Inventory_Item(std::string name, int quantity);
	~Inventory_Item();

	std::string GetItemName() const;
	int GetItemQuantity() const;

	void SetItemName(std::string);
	void SetItemQuantity(int);

	virtual void Display() const;
protected:
	std::string item_name;
	int item_quantity;
private:
};
#endif