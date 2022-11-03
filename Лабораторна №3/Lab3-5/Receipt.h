#pragma once
#include <vector>
#include "Medicine.h"
using namespace std;

class Receipt
{
	vector<Medicine> receipt;
public:
	Receipt();
	void addMedicine(Medicine& medicine);
	vector<Medicine> searchBy(string name);
	vector<Medicine> searchBy(int amount);
	vector<Medicine> searchBy(double oneItemPrice);
	double getReceiptPrice();
};

