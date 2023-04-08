#include <iostream>
using namespace std;

int main() {
    // Just like Java!
    char arrowBody;
    char arrowHead;

    cout << "Enter a character for the body of the arrow: ";
    cin >> arrowBody;

    cout << "Enter a character for the head of the arrow: ";
    cin >> arrowHead;

    cout << "     " << arrowHead << "\n";
    cout << arrowBody << arrowBody << arrowBody << arrowBody << arrowBody << arrowHead << arrowHead << "\n";
    cout << arrowBody << arrowBody << arrowBody << arrowBody << arrowBody << arrowHead << arrowHead << arrowHead << "\n";
    cout << arrowBody << arrowBody << arrowBody << arrowBody << arrowBody << arrowHead << arrowHead << "\n";
    cout << "     " << arrowHead << "\n";

    // Only use single quotes for chars (assigning or otherwise).
    char exampleChar = 'a';     // under the hood, chars store numbers and references that value to translate into a char (encoding, like Unicode or ASCII).
    cout << exampleChar;

    return 0;
}
