#include <iostream>
#include "Medicine.h"
#include "Receipt.h"

using namespace std;

int main()
{
    Receipt receipt;
    Medicine medicine1("Ibuprofen", 2, 2.5);
    Medicine medicine2("Aspirin", 1, 2.5);
    Medicine medicine3("Insulin", 4, 3);
    Medicine medicine4("Clonidine", 5, 2.5);
    Medicine medicine5("Insulin", 2, 6);
    receipt.addMedicine(medicine1);
    receipt.addMedicine(medicine2);
    receipt.addMedicine(medicine3);
    receipt.addMedicine(medicine4);
    receipt.addMedicine(medicine5);
    cout << "Receipt price: " << receipt.getReceiptPrice() << endl << endl;
    cout << "Medicine by name 'Ibuprofen': " << endl << endl;
    for (Medicine medicine : receipt.searchBy("Ibuprofen")) 
    {
        cout << medicine << endl << endl;
    }
    cout << endl << "Medicine by amount '2': " << endl << endl;
    for (Medicine medicine : receipt.searchBy(2)) 
    {
        cout << medicine << endl << endl;
    }
    cout << endl << "Medicine by one item price '2.5': " << endl << endl;
    for (Medicine medicine : receipt.searchBy(2.5)) 
    {
        cout << medicine << endl << endl;
    }

    try 
    {
        Medicine medicine1("Ibuprofen", -2, 2.5);
    }
    catch (InvalidMedicineException e) 
    {
        cout << e.getMessage() << endl;
    }
}
