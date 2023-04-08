// The preprocessor is a tool that scans a file from top to bottom looking for '#' symbols
// The hash symbol is not a statement, but it modifies the compilation of the program in some way.
// Each line with beginning with a hash is called a "preprocessor directive"
#include <iostream> // "Include directive" - replace this line with contents from the given filename
#include "doublenumber.h"   // Header filetype is recommended for those being included
// "" will cause the compiler to look in the directory being ran from
// <> will cause the compiler to look in the standard library directory for the system

using namespace std;

int main() {
    cout << doubleValue(1234) << '\n';
    cout << doubleValue(12.34) << '\n';
    
    return 0;
}