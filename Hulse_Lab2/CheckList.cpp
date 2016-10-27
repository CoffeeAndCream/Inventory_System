/*
class  InventorySystem: (minimum implementation specified below). This class stores InventoryItem objects 
	(which are in fact InventoryItem base class pointers to derived Product objects) and member functions to manipulate those Product objects as shown below:
Private data members
	Store Name
	Store ID
	Item List (array of pointers to InventoryItem objects, max of 512)
	Item Count (tracking how many items are currently stored in the array)
Constructors (initialize all pointers in the array to NULL in addition to what's described below)
	Default constructor: set data members to 0 (for integers), 0.0 (for float/double), or NULL (for pointers) as appropriate
	Non-default constructor: taking a string for store name, an integer for store ID
Destructor: de-allocate dynamic memory in the array of pointers (up to Item Count elements)
Public member functions:
	BuildInventory: read a text file containing Product records (one Product per line), dynamically allocate Product objects and store the objects in the array ItemList (an array of InventoryItem pointers). It should also update Item Count as needed
	ShowInventory: display all Products in the inventory. Output must be properly formatted and aligned (using field with and floating data with 2 digits after decimal point). Note that if you invoke the Display function using the pointers from the array only InventoryItem (base object) information will be displayed. Extra work is needed to properly display Products (derived objects) information
	ShowDefectInventory: display only defective Products
	Terminate: iterate thru the array of pointers to write Product objects in the array to a text file in the same format as they were read in. You may use a different file name for writing.
	mutators/accessors for store name, store id, and item count
*/

/*
THIS class IS DONE - 10/12/2016 ------------------------------------------------------------------------------------------------
class InventoryItem
*/

/*
THIS class IS DONE - 10/12/2016 ------------------------------------------------------------------------------------------------
class Product: derived class from InventoryItem class (minimum implementation specified below)

*/