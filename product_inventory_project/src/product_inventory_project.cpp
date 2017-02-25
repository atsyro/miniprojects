#include <iostream>
#include <vector>
#include "Product.h"
#include "Inventory.h"

using namespace std;
using namespace mini;

int main()
{
	Inventory inventory{
		Product(0, 99.99, 1),
		Product(1, 10, 2),
		Product(2, 0.99, 12)};

	inventory.add(Product(3, 1.99, 5));

	cout << "Inventory contains: " << endl;
	inventory.show();
	cout << endl;

	// Delete Product with id 1
	inventory.del(1);

	cout << "Inventory contains: " << endl;
	inventory.show();
	cout << endl;

	cout << "Total price: " << inventory.totalPrice() << endl;

	return 0;
}
