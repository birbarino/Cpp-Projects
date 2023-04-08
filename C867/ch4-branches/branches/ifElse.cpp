#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int userNum;
    int myNum = 10;
    string userGreeting;
    string myGreeting = "Hello there.";

    cout << "Please provide an integer: ";
    cin >> userNum;

    if (userNum > myNum) {
        cout << "It looks like your number is bigger than mine.\n";
    } else if (userNum == myNum) {
        cout << "It appears our number is the same.\n";
    } else {
        cout << "It seems my number is larger than yours.\n";
    }

    cout << "Would you like to say \"Hello\"? ";
    getline(cin, userGreeting);

    if (userGreeting == "Hello") {
        cout << myGreeting << "\n";
    } else if (userGreeting == "Hi") {
        cout << "Hi there.\n";
    } else {
        cout << "Uhh, I'm not sure how to respond to that. Try providing exactly \"Hello\"\n";
    }

    if (1 || 0) {
        cout << "\nEvaluates as true.";
    } else {
        cout << "\nThis does not execute.";
    }

    if ((0 < 100) && (0 < 100)) {
        cout << "\nThis is also true.";
    } else {
        cout << "\nThis does not execute.";
    }

    return 0;
}