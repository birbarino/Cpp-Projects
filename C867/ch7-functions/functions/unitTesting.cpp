#include <iostream>
#include <cassert>  // Required for the "assert()" function
using namespace std;

int divide(int num1, int num2) {
    if (num2 > 0) {
        return num1 / num2;
    } else {
        return 0;
    }
}

int main() {
    cout << "Testing commenced.\n";

    // A great way to test functions
    assert(divide(1, 0) == 0);
    assert(divide(100, 'a') == 1);
    assert(divide(1, 100) == 0);
    assert(divide(100, 2) == 50);
    assert(divide(100, 2) == 500);  // Intentionally incorrect, stops execution.

    // When unit testing, try to include edge cases (large numbers, negative numbers, unlikely situations, etc.)

    cout << "Testing completed.\n"; // Never executed.

    return 0;
}