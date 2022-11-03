#include "Medicine.h"
using namespace std;

Medicine::Medicine(string name, int amount, double oneItemPrice)
{
	if (amount < 0 || oneItemPrice < 0) 
	{
		throw InvalidMedicineException("Entered invalid medicine");
	}
	this->name = name;
	this->amount = amount;
	this->oneItemPrice = oneItemPrice;
}

Medicine& Medicine::operator+=(int amount)
{
	this->amount += amount;
	return *this;
}

Medicine& Medicine::operator-=(int amount)
{
	this->amount -= amount;
	return *this;
}

Medicine Medicine::operator+(int oneItemPrice)
{
	return Medicine(this->name, this->amount, this->oneItemPrice + oneItemPrice);
}

Medicine Medicine::operator-(int oneItemPrice)
{
	return Medicine(this->name, this->amount, this->oneItemPrice - oneItemPrice);
}

double Medicine::getTotalPrice()
{
	return oneItemPrice * amount;
}

std::string Medicine::getName()
{
	return name;
}

int Medicine::getAmount()
{
	return amount;
}

double Medicine::getOneItemPrice()
{
	return oneItemPrice;
}

ostream& operator<<(ostream& os, const Medicine& medicine)
{
	os << "Medicine name: " << medicine.name << "\n"
		<< "Medicine amount: " << medicine.amount << "\n"
		<< "Medicine one item price: " << medicine.oneItemPrice;
	return os;
}
