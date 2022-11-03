#include "Receipt.h"
using namespace std;

Receipt::Receipt()
{
	receipt = vector<Medicine>();
}

void Receipt::addMedicine(Medicine& medicine)
{
	receipt.push_back(medicine);
}

vector<Medicine> Receipt::searchBy(string name)
{
	vector<Medicine> searchResult = vector<Medicine>();

	for (Medicine medicine : receipt) 
	{
		if (medicine.getName() == name) 
		{
			searchResult.push_back(medicine);
		}
	}

	return searchResult;
}

vector<Medicine> Receipt::searchBy(int amount)
{
	vector<Medicine> searchResult = vector<Medicine>();

	for (Medicine medicine : receipt) 
	{
		if (medicine.getAmount() == amount) 
		{
			searchResult.push_back(medicine);
		}
	}

	return searchResult;
}

vector<Medicine> Receipt::searchBy(double oneItemPrice)
{
	vector<Medicine> searchResult = vector<Medicine>();

	for (Medicine medicine : receipt) 
	{
		if (medicine.getOneItemPrice() == oneItemPrice) 
		{
			searchResult.push_back(medicine);
		}
	}

	return searchResult;
}

double Receipt::getReceiptPrice()
{
	double price = 0;
	for (Medicine medicine : receipt) 
	{
		price += medicine.getTotalPrice();
	}
	return price;
}
