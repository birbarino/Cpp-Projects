#include <iostream>
using namespace std;

int main() {
    int i;  // This doesn't have to be defined outside of the loop.
    int numInts;
    int currVal;

    // Use ++i (pre-increment) unless you have a reason use i++ (post-increment).
    for (i = 0; i < 5; ++i) {
        cout << i;
    }

    // Reading many tokens of input from console
    cout << "Provide a series of numbers with the following format.\n";
    cout << "<total numbers being provided> num1, num2, ... ex. '3 0 1 2'\n";

    cin >> numInts;   
    for (i = 0; i < numInts; ++i) {
        cin >> currVal;
        cout << "{" << currVal << "}";
    }

    cout << "\n";

    return 0;
}