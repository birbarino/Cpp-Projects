#include <iostream>
using namespace std;

// Write a program with total change amount as an integer input, and output the change using the 
// fewest coins, one coin type per line. The coin types are Dollars, Quarters, Dimes, Nickels, and 
// Pennies. Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.

int main() {
    int total, dollars, quarters, dimes, nickels, pennies;
    
    cin >> total;

    if (total <= 0) {
        cout << "No change\n";
    } else {
        dollars = total / 100;
        total -= 100 * dollars;

        quarters = total / 25;
        total -= 25 * quarters;

        dimes = total / 10;
        total -= 10 * dimes;

        nickels = total / 5;
        total -= 5 * nickels;

        pennies = total;


        if (dollars > 1) {
            cout << dollars << " Dollars\n";
        } else if (dollars > 0) { 
            cout << dollars << " Dollar\n";
        }

        if (quarters > 1) {
            cout << quarters << " Quarters\n";
        } else if (quarters > 0) { 
            cout << quarters << " Quarter\n";
        }

        if (dimes > 1) {
            cout << dimes << " Dimes\n";
        } else if (dimes > 0) { 
            cout << dimes << " Dime\n";
        }

        if (nickels > 1) {
            cout << nickels << " Nickels\n";
        } else if (nickels > 0) { 
            cout << nickels << " Nickel\n";
        }

        if (pennies > 1) {
            cout << pennies << " Pennies\n";
        } else if (pennies > 0) { 
            cout << pennies << " Penny\n";
        }
    }

    return 0;
}