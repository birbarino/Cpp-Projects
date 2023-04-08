#include <iostream>
using namespace std;

int main() {
    int userNum;
    int x;
    int firstDiv;
    int secondDiv;
    int thirdDiv;

    cout << "This program will take a number and divide it by another given number, then divide the quotient by the divisor, then that once more.\n";

    cout << "What is the dividend? ";
    cin >> userNum;
    
    cout << "What is the divisor? ";
    cin >> x;
    
    firstDiv = userNum / x;
    secondDiv = firstDiv / x;
    thirdDiv = secondDiv / x;
    
    cout << firstDiv << " " << secondDiv << " " << thirdDiv << "\n";

    return 0;
}
