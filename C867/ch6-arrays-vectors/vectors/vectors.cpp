#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // vector<dataType> vectorName(numElements)
    const int NUM_ELEMENTS = 3;
    vector<int> intVector(NUM_ELEMENTS);
    vector<char> charVector = {'H', 'e', 'l', 'l', 'o'};    // Creates a vector with 5 elements with the given values in each index
    vector<float> floatVector(NUM_ELEMENTS - 1, 3.14); // Set the value to populate in each element with the second arg
    vector<double> doubleVector;    // Size is 0. Sizes can be changed with var.resize(numElements)

    intVector.at(0) = 1;
    intVector.at(1) = 3;
    
    cout << intVector.at(0) << intVector.at(2) << "\n"; // intVector.at(2) is auto-assigned to be 0
    intVector.resize(1);    // Deletes the 3 and 0 at the end, leaving just a 1

    // Print all of the vector's elements
    for (int i = 0; i < charVector.size(); ++i) {
        cout << charVector.at(i);
    }
    cout << "\n";

    for (int i = 0; i < floatVector.size(); ++i) {
        cout << floatVector.at(i) << "\n";
    }

    doubleVector.resize(doubleVector.size() + 2, -5435.3293281);  // Adds two elements to the end of the vector.
    cout << fixed << setprecision(6) << doubleVector.at(0) + doubleVector.at(1) << "\n";

    // Vector push_back - append a new element to the end of a vector with myVct.push_back(value)
    doubleVector.push_back(12.2);

    // Use myVct.back() to return the last element's value
    double lastValue = doubleVector.back();
    cout << "Added " << lastValue << " to the end of doubleVector.\n";
    doubleVector.pop_back(); // return void, removes the last element

    return 0;
}