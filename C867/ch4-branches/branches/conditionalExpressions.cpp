#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string qualification;

    cout << "How old are you? ";
    cin >> age;

    // myVar = (condition) ? exprIfTrue : exprIfFalse;
    // '?' and ':' used together referred to as a ternary operator
    qualification = (age > 64) ? "You qualify for a senior discount.\n" : "You do not qualify for a senior discount.\n";

    cout << qualification;

    /* Same as the following:

    if (age > 64) {
        qualification = "You qualify for a senior discount.\n";
    } else {
        qualification = "You do not qualify for a senior discount.\n";
    }
    */

    return 0;
}