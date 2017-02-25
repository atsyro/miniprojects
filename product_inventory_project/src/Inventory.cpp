
#include "Inventory.h"

namespace mini
{

Inventory::Inventory(std::initializer_list<Product> prods)
{
	for(const Product& prod : prods)
	{
		add(prod);
	}
}

void Inventory::add(const Product &prod)
{
	m_products[prod.getId()] = prod;
}

void Inventory::del(unsigned int id)
{
	m_products.erase(id);
}

double Inventory::totalPrice()
{
	double total = 0;
	for(auto &vals : m_products)
		total += vals.second.totalPrice();
	return total;
}

void Inventory::show()
{
	for(auto &vals : m_products)
		std::cout << vals.second << std::endl;
}

} /* namespace mini */
