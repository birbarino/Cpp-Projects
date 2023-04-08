
#include <iostream>
using namespace std;

void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies) {
    numQuarters = totCents / 25;
    totCents -= 25 * numQuarters;
    
    numDimes = totCents / 10;
    totCents -= 10 * numDimes;
    
    numNickels = totCents / 5;
    totCents -= 5 * numNickels;
    
    numPennies = totCents / 1;
    totCents -= 1 * numPennies;
}

int main() {
    int userCents;
    int numQuarters, numDimes, numNickels, numPennies;

    cout << "Enter total cents: ";
    cin >> userCents;

    ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

    cout << "Quarters: " << numQuarters << '\n';
    cout << "Dimes: " << numDimes << '\n';
    cout << "Nickels: " << numNickels << '\n';
    cout << "Pennies: " << numPennies << '\n';

    return 0;
}
