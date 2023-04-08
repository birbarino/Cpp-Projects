#include <iostream>
#include <vector>
using namespace std;

// insert() and erase() "member functions" require an iterator as an argument, which can be obtained by using begin(), end(), etc.
int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    unsigned int i;

    cout << "Values: ";

    for (i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << " ";
    }
    
    cout << "Inserting a 0...\n";
    vec.insert(vec.begin(), 0); // vec.begin() returns an iterator, which insert() requires.

    cout << "New values: ";

    for (i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << " ";
    }

    cout << "\nRemoving the 3...\n";
    vec.erase(vec.begin() + 3); // Beginning of vector + 3

    cout << "New values: ";

    for (i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << " ";
    }

    cout << "\nRemoving the last value...\n";
    vec.erase(vec.end() - 1); // end() also returns an iterator at the very end of the array, subtract 1 to get the last value

    cout << "New values: ";

    for (i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << " ";
    }

    return 0;
}