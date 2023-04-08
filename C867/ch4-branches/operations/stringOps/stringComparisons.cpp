#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Apple";
    string b = "Banana";

    // Each letter is iterated over and compared with encoded value
    cout << (a == b) << "\n";
    cout << (a > b) << "\n";
    cout << (a < b) << "\n";

    return 0;
}