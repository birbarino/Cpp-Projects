#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* Write a program that first gets a list of integers from input. The input begins with an integer 
    indicating the number of integers that follow. Then, get the last value from the input, which indicates 
    a threshold. Output all integers less than or equal to that last threshold value. */
    
    vector<int> userInts; // A vector to hold the user's input integers
    int numElements;
    int input;
    int upperBound;
    int value;

    // Resize vector to fit prompted input (first int given)
    // cout << "How many ints are in the list of ints you want to provide? ";
    cin >> numElements;
    userInts.resize(numElements);

    // Store numElements quantity of ints
    // cout << "Please provide " << numElements << " ints separated by spaces or new lines:\n";
    for (int i = 0; i < numElements; ++i) {
        cin >> input;
        userInts.at(i) = input;
    }

    // Take in upper bound to output numbers that are less than.
    cin >> upperBound;

    for (int i = 0; i < numElements; ++i) {
        value = userInts.at(i);
        if (value <= upperBound) {
            cout << value << ",";
        }
    }

    cout << '\n';

    return 0;
}
