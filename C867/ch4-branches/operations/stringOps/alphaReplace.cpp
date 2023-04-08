#include <iostream>
#include <string>
using namespace std;

int main() {
    string passCode;

    cout << "Please provide a string that is two characters long: ";
    cin >> passCode;

    if (isalpha(passCode.at(0))) {
        passCode.at(0) = '_';    
    }
    
    if (isalpha(passCode.at(1))) {
        passCode.at(1) = '_';
    }

    cout << passCode << endl;
    return 0;
}