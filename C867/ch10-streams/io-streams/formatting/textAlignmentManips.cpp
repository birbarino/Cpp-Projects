#include <iostream>
#include <iomanip>  // Also has some text-alignment manipulators
using namespace std;

// Dog age in human years
int main() {
    cout << "Some examples...\n";

    // setw(n) - Sets the number of characters for the next output item (does not persist). 
    // Right-aligned by default
    cout << setw(15) << "Hello there\n";

    // setfill(c) - Sets the fill character to char c
    cout << setfill('=') << setw(8) << "boy\n";  // Newline character included in the char count
    cout << setfill(' ');  // Reset the fill

    // left - Changes to left alignment
    cout << left << setw(12) << "How goes?";

    // right - Changes back to right alignments
    cout << right << setw(14) << "Goes well!\n";

    cout << "\n";
    // Header
    cout << setw (10) << left << "Dog age" << "|";
    cout << setw(12) << right << "Human age\n";

    // Produce long line for header
    cout << setfill('-') << setw(23) << "\n";  // 10 + 1 + 12 -- 1 is from the "|"

    // Reset fill character
    cout << setfill(' ');

    cout << setw(10) << left << "2 months"  << "|";
    cout << setw(12) << right << "14 months\n";
    cout << setw(10) << left << "6 months"  << "|";
    cout << setw(12) << right << "5 years\n";
    cout << setw(10) << left << "8 months"  << "|";
    cout << setw(12) << right << "9 years\n";
    cout << setw(10) << left << "1 year"  << "|";
    cout << setw(12) << right << "15 years\n";

    // Long line for bottom of table
    cout << setfill('-') << setw(23) << "\n"; 


    return 0;
}
