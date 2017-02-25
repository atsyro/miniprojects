
#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>

namespace mini
{

struct Product
{
public:
	Product() {};
	Product(unsigned int pId, double price, unsigned int amount) :
		m_id(pId), m_price(price), m_amount(amount) {};

	unsigned int getId() const { return m_id; };
	double getPrice() const { return m_price; };
	unsigned int getAmount() const { return m_amount; };
	double totalPrice() const
	{
		return m_amount * m_price;
	}

	friend std::ostream &operator<<(std::ostream &out, const Product &prod)
	{
		out << prod.m_id << ": price = " << prod.m_price << "; amount = " << prod.m_amount << std::flush;
		return out;
	}

private:
	unsigned int m_id{};
	double m_price{};
	unsigned int m_amount{};
};

} /* namespace mini */

#endif /* PRODUCT_H_ */
