#include <iostream>
using namespace std;

int main() {
    int inputYear;
    bool isLeapYear = false;
    
    cin >> inputYear;
    
    if ((inputYear % 100 == 0) && (inputYear % 400 == 0)) {
        isLeapYear = true;
    } else  if ((inputYear % 4 == 0) && (inputYear % 100 != 0)) {
        isLeapYear = true;
    }

    if (isLeapYear) {
        cout << inputYear << " - leap year\n";
    } else {
        cout << inputYear << " - not a leap year\n";
    }

    return 0;
}