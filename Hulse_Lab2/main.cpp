#include <iostream>
#include <time.h>
#include "InventorySystem.h"
using namespace std;

int main() {
	srand(time(NULL)); 

	Inventory_System *h = NULL;
	h = new Inventory_System("Radioshack", 117);
	h->BuildInventory();
	h->ShowInventory();
	h->ShowDefectInventory();
	//h->Terminate();

	delete h;
	getchar();
	return 0;
}