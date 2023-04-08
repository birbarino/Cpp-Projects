#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    int userYear;
    int userPrice;
    int userCurrentYear;
    Car myCar;

    cout << "What year was the car produced? ";      
    cin >> userYear;

    cout << "What was it's price? ";
    cin >> userPrice;

    cout << "What year do you want to calculate it's value to? ";
    cin >> userCurrentYear;
        
    myCar.SetModelYear(userYear);
    myCar.SetPurchasePrice(userPrice);
    myCar.CalcCurrentValue(userCurrentYear);
        
    myCar.PrintInfo();
    
    return 0;
}