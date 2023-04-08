#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    
    cin >> quarters;
    cin >> dimes;
    cin >> nickels;
    cin >> pennies;

    dollars = (quarters / 4.0) + (dimes / 10.0) + (nickels / 20.0) + (pennies / 100.0);
    cout << "Amount: $" << fixed << setprecision(2) << dollars << "\n";
    
    return 0;
}