//************************************************
//
// Name : Prince Prince
// Class : OOP345 
// ID : 145685228
// Mail : pprince5@myseneca.ca
//
//************************************************
#ifndef SENECA_TOY_H
#define SENECA_TOY_H
#include <iostream>
#include <string>
#include <utility>

namespace seneca
{
	class Toy 
	{
		int Order_ID;

		std::string m_name;

		int MAX_Items;

		double m_Price;

		double TAX = 0.13;
		//
		//
	public:
		Toy();
		//
		void update(int numItems);
		//
		Toy(const std::string& toy);
		//
		friend std::ostream& operator<<(std::ostream& ostr, const Toy& rhs);
	};
}
#endif