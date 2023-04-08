#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "It's bananas, b-a-n-a-n-a-s!\n";
    string example = "Example.\n";

    // To access a certain char in a str, use the .at() method
    cout << str << str.at(0) << str.at(1) << str.at(4) << str.at(7) << str.at(6) << str.at(5) << "\n";

    // You can also modify strings with .at()
    str.at(5) = 'd';
    str.at(14) = 'd';
    cout << str;

    // You can also use brackets to access at an index, but there is no error checking
    // This is potentially very risky.
    cout << str[str.length() - 10] << str[(str.length() - 1)] ;  //"\n-\n"

    // These return the same value
    cout << "String length is " << str.length() << str.at(str.length() - 1);   // Also accesses last character ('\n')
    cout << "String size is " << str.size() << "\n";

    // There is also a .append() method
    str.append("This is the same string variable as what's a line above, btw.\n");
    cout << "\n" << str;

    return 0;
}