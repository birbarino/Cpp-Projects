#include <iostream>
#include <string>     // Used to allow string variables to be created
using namespace std;

int main() {
    string subject;
    string verb;
    string object = "a platypus";

    // cin >> strVar THIS ONLY GRABS THE FIRST TOKEN
    cout << "What is your name? ";
    getline(cin, subject);    // The getline(cin, strVar) can be used to all input up until a newline character!

    cout << "What is your favorite verb (past tense)? ";
    getline(cin, verb);

    cout << subject << " " << verb << " " << object << ".\n";

    return 0;
}

/*
* Some notes about the cin operator:
* It apparently leaves the trailing newline char on the input, meaning that if you have cin before getline, the trapped '\n' will be passed to the first getline(). getline() cuts off the '\n' when used.
* The cin operator also does not capture spaces.

Example:
string name;
string verb;

// This works as expected
getline(cin, name);    // store "Joseph Smith"
cin >> verb;    // store "rocks!\n"

cout << name << " " << verb;    // Outputs "Joseph Smith rocks!"

// This will work weirdly
cin >> verb;    // store "rocks!\n"
getline(cin, name);    // store "Joseph Smith"

cout << name << " " << verb;    // Outputs " rocks!"

*/
