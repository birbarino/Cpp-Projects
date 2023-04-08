#include <iostream>
using namespace std;

int main() {
    // char varName[length+null-byte] = "Contents";
    // C++ automatically appends a null character to make char array a "null-terminated string"
    // Printing stops at the null character
    char movieTitle[10] = "Star Wars";  // AKA C Strings
    char bookTitle[] = "The Wizard of Oz";  // auto-size array to length+1 (once again, null char)
    char smashMe[10];

    cout << movieTitle << '\n';
    cout << bookTitle << '\n';

    // Be careful when looping over C strings, you may go out of range if you iterate over the entire length (incl. null char)
    // Loop and check for null
    for (int i = 0; movieTitle[i] != '\0'; ++i) {
        cout << movieTitle[i];
    }

    cout << '\n';

    // Accepting user input into a variable of fixed size? And no validation? Seems safe.
    cout << "Gimme some smashing input.\n";
    cin >> smashMe;
    cout << smashMe;

    return 0;
}