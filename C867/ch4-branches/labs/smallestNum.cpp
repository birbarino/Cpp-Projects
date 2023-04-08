#include <iostream>
using namespace std;

// Write a program whose inputs are three integers, and whose output is the smallest of the three values. 
int main() {
    int x, y, z;

    cin >> x;
    cin >> y;
    cin >> z;

    if (x < y && x < z) {
        cout << x;
    } else if (y < z) {
        cout << y;
    } else {
        cout << z;
    }

    cout << "\n";

    return 0;
}