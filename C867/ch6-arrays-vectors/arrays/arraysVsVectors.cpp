#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};  // Simpler syntax, no protections from accessing out-of-range
    vector<int> vec = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};    // Much safer than arrays

    cout << arr[20] << "\n"; // Out of range

    cout << vec.back() << "\n";

    cout << vec[9] << "\n"; // Vectors can also be accessed with bracket notation.

    return 0;
}