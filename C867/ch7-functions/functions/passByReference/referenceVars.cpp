#include <iostream>
using namespace std;

int main() {
    int value;
    int& valueRef = value;  // Refers to value variable

    cout << "Gimme an int: ";
    cin >> value;

    value *= 2; // Modifying the original affects the reference

    cout << value << valueRef << '\n';  // Both are the same, prints to be <value*2><value*2>

    valueRef = value/4; // Changing the reference also changes the original (makes sense, right?)

    cout << value << valueRef << '\n';  // Prints <value/4><value/4>

    return 0;
}