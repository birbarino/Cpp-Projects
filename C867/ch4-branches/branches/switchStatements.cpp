#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Provide a number: ";
    cin >> num;
    
    switch (num) {
        case 0:
            cout << "Nice.\n";
            break;  // Breaks prevent the next statements from being executed until a break.
        case 1:
            cout << "Oh.\n";
            break;
        case 2:
        case 3:
        case 4:
            cout << "Oh my...\n";   // Executed when num is 2, 3, or 4
            break;
        default:
            cout << "Ah, gotcha.\n";
            break;
    }

    return 0;
}