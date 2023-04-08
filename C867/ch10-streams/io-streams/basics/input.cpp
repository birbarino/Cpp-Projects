#include <iostream>
using namespace std;

int main() {
    // istream is a class for input and provides the ">>" operator (exraction operator)
    // >> extracts data from the buffer and writes it into variables
    // When receiving input from a keyboard, the characters received are stored in a buffer
    int num;
    cin >> num;  // moves data from buffer to variable until whitespace provided
    // cin is a predefined istream associated with a system's standard input (usually a keyboard)
    // >> skips any leading whitespace and extracts characters consistent with target's data type
    // >> stops at/excludes the next whitespace, converts/stores chars into the target location

    // cin does not read directly from the keyboard, but another data buffer setup by the system
    // Basically, keyboard -> buffer -> buffer -> variable

    // If the target type is int and input is "21JumpStreet", 21 will be stored in the given int
    // If the target type is char and input is "  Hey there", 'H' will be stored

    return 0;
}