#include <iostream>
#include <vector>     // Must include vector library to use vectors
using namespace std;

int main() {
    vector<int> userInts; // A vector to hold the user's input integers
    int numElements;
    int input;

    // Resize vector to fit prompted input (first int given)
    cout << "How many ints are in the list of ints you want to provide? ";
    cin >> numElements;
    
    // Store numElements quantity of ints
    cout << "Please provide " << numElements << " ints separated by spaces or new lines:\n";
    for (int i = 0; i < numElements; ++i) {
        cin >> input;
        userInts.push_back(input);
    }

    // Iterate over vector in reverse, printing the value
    for (int i = userInts.size() - 1; i >= 0; --i) {
        if (i != 0) {
            cout << userInts.at(i) << ", ";
        } else {
            cout << userInts.at(i) << '\n';
        }
    }

    return 0;
}
