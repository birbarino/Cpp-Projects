#include <iostream>
using namespace std;

// Normal parameters are "pass by value", where the arg's value is copied into a local var, which must be returned to keep.

// No return necessary when passing by reference.
void ConvHrMin(int timeVal, int& hrVal, int& minVal) {
    hrVal = timeVal / 60;
    minVal = timeVal % 60;
    // Cannot return multiple values, pass by reference by appending "&" to param's data type to go around this.
    // This will NOT create a local copy of the arguments provided.
    // USE THIS SPARINGLY. If two return values are needed, instead create two functions.
}

int main() {
    int totalTime;
    int userHr;
    int userMin;

    totalTime = 0;
    userHr = 0;
    userMin = 0;

    cout << "Enter total minutes: ";
    cin >> totalTime;

    ConvHrMin(totalTime, userHr, userMin);

    cout << "Equals: " << userHr << " hrs " << userMin << " mins\n";

    return 0;
}