#include "FoodItem.h"
#include <iostream>
#include <iomanip> 

using namespace std;

int main(int argc, char* argv[]) {
    string itemName;
    double amountFat, amountCarbs, amountProtein;

    cout << "Food item name: ";
    getline(cin, itemName);

    cout << "Grams of fat: ";
    cin >> amountFat;

    cout << "Grams of carbohydrates: ";
    cin >> amountCarbs;

    cout << "Grams of protein: ";
    cin >> amountProtein;

    FoodItem FoodItem1 = FoodItem(itemName, amountFat, amountCarbs, amountProtein);

    double numServings;

    cout << "How many servings? ";
    cin >> numServings;

    FoodItem1.PrintInfo();
    cout << "Number of calories for " << numServings << " serving(s): " << FoodItem1.GetCalories(numServings) << '\n';

    return 0;
}