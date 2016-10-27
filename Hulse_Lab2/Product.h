#ifndef PRODUCT_H
#define PRODUCT_H
#include "InventoryItem.h"
#include <string>
typedef enum { PC_NEW, PC_USED, PC_REFURBISHED, PC_DEFECTIVE } T_Condition;

class Product : public Inventory_Item {
public:

	Product();
	Product(std::string, int);

	~Product();

	int GetProductId() const;
	double GetProductPrice() const;
	T_Condition GetProductCondition() const;

	void SetProductId(int);
	void SetProductPrice(double);
	void SetProductCondition(T_Condition);

	virtual void Display() const;
private:
	T_Condition condition_;
	int product_id;
	double product_price;
};


#endif