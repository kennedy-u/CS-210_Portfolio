/**
 * Kennedy Uzoho
 * CS-210
 * Project 3
 *
 * Main Method
 */


#ifndef PROJECT_3_INVENTORYITEM_H
#define PROJECT_3_INVENTORYITEM_H

#include <string>

using namespace std;

/**
 * InventoryItem class for information about a sold item.
 */
class InventoryItem {
private:
	string name;
	int quantity;
public:
	explicit InventoryItem(const string& name, int qty = 1);
	string getName();
	[[nodiscard]] int getQty() const;
};


#endif //PROJECT_3_INVENTORYITEM_H
