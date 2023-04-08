#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
    VendingMachine machine;
    int purchaseCount, restockCount;

    cout << "How many beverages would you like to buy? ";
    cin >> purchaseCount;
    machine.Purchase(purchaseCount);

    cout << "How many beverages would you like to restock the machine with? ";
    cin >> restockCount;
    machine.Restock(restockCount);

    machine.Report();
}