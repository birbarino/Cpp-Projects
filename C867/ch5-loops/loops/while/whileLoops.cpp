#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    cout << "Welcome to the echo chamber!\nType \"quit\" to break out of the loop\n";
    
    while (input != "quit") {
        getline(cin, input);
        cout << input << "\n";
    }

    return 0;
}
