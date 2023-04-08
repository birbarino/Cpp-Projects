#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Output string streams allow you to output chars from a buffer to a string instead of a screen
int main() {
    istringstream inSS;
    ostringstream outSS;  // Output string stream
    string info, firstName, lastName, item;
    int userAge;

    cout << "Enter \"firstname lastname age\":\n";
    getline(cin, info);

    inSS.str(info);
    inSS >> firstName >> lastName >> userAge;

    // Write input to a string stream - works a bit like cout
    outSS << lastName << ", " << firstName << " " << userAge;

    // Add minor string to buffer
    if (userAge < 18) {
        outSS << " (minor)";
    }

    // Extract string stream buffer as one string
    info = outSS.str();

    cout << "Information: " << info << '\n';

    // --------------------------------------------------------------------------------------------
    // Output some info usings loops and output string streams
    ostringstream newOutSS;

    cout << "Enter items (type Exit to quit):\n";
    cin >> item;
    while (item != "Exit") {
        newOutSS << item << " ";
        cin >> item;
    }

    cout << newOutSS.str() << '\n';

    return 0;
}
