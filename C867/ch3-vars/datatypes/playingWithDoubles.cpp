#include <iostream>
#include <iomanip>    // Required for setprecision()

using namespace std;

int main() {
    // Like with ints, strings, etc. "double" is a keyword used to define a big ol' floating pt num.
    double milesTraveled;
    double gasCost;
    double mileageRate = 0.08;
    double tripCost;

    cout << "Please update the mileage tracker. \nHow many miles have you traveled this trip? ";
    cin >> milesTraveled;
    
    cout << "\nNice. How much did it cost you to fill up (if applicable)? ";
    cin >> gasCost;

    // Calc cost of gas with some quick maths
    tripCost = (milesTraveled * mileageRate) + gasCost;

    // Changing the precision of floats/doubles is relatively easy. It requires the iomanip lib and "cout << fixed << setprecision(n) << variable;"
    cout << "\nGreat, we'll be reimbursing you $" << fixed << setprecision(2) << tripCost << " for your trip. Thank you reporting honestly.\n";


    return 0;
} 
