#include <iostream>
#include <cmath>    // Required for fabs()
using namespace std;

int main() {
    float x, y;

    cout << "Give me a floating-point number: ";
    cin >> x;
    cout << "And another floating-point number: ";
    cin >> y;

    cout << x << " == " << y << ": ";
    if (x == y) {
        cout << "True";
    } else {
        cout << "False";
    }

    cout << " - Generally, you do not want to compare like this as it may behave unexpectedly.\n";

    cout << x << " > " << y << ": ";
    if (x > y) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    cout << x << " < " << y << ": ";
    if (x < y) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }

    cout << "\nHere is how to check if they are close enough to equal:\n";
    cout << x << " - " << y << " = " << x - y << "\n";
    cout << "fabs(" << x - y << ") < 0.0001: ";
    if (fabs(x - y) < 0.0001) {
        cout << "True, therefore relatively equal\n";
    } else {
        cout << "False\n";
    }

    return 0;
}