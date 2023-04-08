#include <iostream>
using namespace std;

int main() {
    // randNum % 10 yields 0-9, (randNum % 11) + 20 yields 20-30
    int min;
    int max;
    int result;

    cout << "Let's generate some random numbers!\n";

    cout << "What's your minimum? ";
    cin >> min;

    cout << "What's your maximum? ";
    cin >> max;

    result = (rand() % max) + min;

    cout << "Result: " << result;

    // This is a mess but it demonstrates how to split a number into different digits.
    int phoneNum = 1234567890;    
    int tmpVal = phoneNum / 10000; // / 10000 shifts right by 4, so 123456. 
    int prefixNum = tmpVal % 1000; // % 1000 gets the right 3 digits, so 456.
    int areaCode =    phoneNum / 10000000;
    int lastFour = phoneNum % 10000;

    cout << "\n(" << areaCode << ") " << prefixNum << "-" << lastFour;

    return 0;
}
