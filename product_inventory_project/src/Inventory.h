
#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <iostream>
#include <map>
#include <initializer_list>
#include "Product.h"

namespace mini
{

class Inventory
{
public:
	Inventory(std::initializer_list<Product> prods);
	void add(const Product &prod);
	void del(unsigned int id);
	double totalPrice();
	void show();

private:
	std::map<unsigned int, Product> m_products;
};

} /* namespace mini */

#endif /* INVENTORY_H_ */
