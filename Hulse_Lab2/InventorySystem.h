#ifndef INVENTORY_SYSTEM_H
#define INVENTORY_SYSTEM_H
#include "InventoryItem.h"
#include "Product.h"
#include <string>
class Inventory_System {
public:

	Inventory_System();
	Inventory_System(std::string, int);

	~Inventory_System();

	int GetStoreId();
	int GetItemCount();
	std::string GetStoreName();

	void BuildInventory();
	void ShowInventory();
	void ShowDefectInventory();
	void Terminate();
private:
	std::string store_name;
	int store_id, item_count = 0;
	Inventory_Item **ptr_inv_item = new Inventory_Item*[512];

};
#endif