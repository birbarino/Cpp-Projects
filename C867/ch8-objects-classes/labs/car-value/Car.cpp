#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
    modelYear = userYear;
}

int Car::GetModelYear() const {
    return modelYear;
}

void Car::SetPurchasePrice(int price) {
    purchasePrice = price;
}

int Car::GetPurchasePrice() const {
    return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;
        
    // Car depreciation formula
    currentValue = (int) 
        round(purchasePrice * pow((1 - depreciationRate), carAge));
}

void Car::PrintInfo() {
    cout << "Car's information:\n";
    cout << "  Model year: " << modelYear << '\n';
    cout << "  Purchase price: $" << purchasePrice << '\n';
    cout << "  Current value: $" << currentValue << '\n';
}