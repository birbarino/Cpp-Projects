#include <iostream>
#include <iomanip>
using namespace std;

double InchesToFeet(int inches) {
    double feet = inches / 12.0;
    return feet;    // Returns to a specified return location
}   
// Upon completion, jump back to instruction calling the function, then stores the returned value into the appropriate variable

// Before executing a function, arguments are copied to local variables with return addresses stored.
// A return address is the address to return to after the function is done executing.
int main() {
    // Each function creates a new set of local variables stored in memory
    int inches; // Initialize variable at a given memory location
    double feet; // Initialized to NULL

    // Store some more instructions into memory to be processed by the CPU
    cout << "How many inches are there? ";
    cin >> inches;  // Store value passed 

    // Call is made, jump to function, init vars in memory + return address, executes, returns to return address, then stores the returned value at the given memory location
    feet = InchesToFeet(inches);

    cout << "That is about " << fixed << setprecision(2) << feet << " feet.\n";

    // Each return statement causes the variables from the function to be discarded (garbage collection)
    return 0;   // Return to designated return value location
}