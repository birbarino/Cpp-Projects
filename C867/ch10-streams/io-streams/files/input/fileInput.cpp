#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Input from a file rather than a keyboard or string.
int main() {
    ifstream inFS;                   // Input file stream
    int fileVal1, fileVal2;     // Data value from file
    string lineString;

    // Try to open file
    cout << "Opening file values.txt\n";

    inFS.open("values.txt");  // Can also be a null-terminated C String instead of C++ String

    if (!inFS.is_open()) {
        cout << "Could not open file values.txt\n";
        return 1;  // Exit and indicate an error
    }

    // Use inFS like cin stream
    cout << "Reading two values.\n";
    inFS >> fileVal1 >> fileVal2;

    // Output values from file
    cout << "File's values:\n";
    cout << "First: " << fileVal1 << '\n';
    cout << "Second: " << fileVal2 << '\n';
    cout << "First + Second = " << fileVal1 + fileVal2 << '\n';

    // You can pull any number of values like so:
    cout << "\nIs there anything else in that file?\n";

    // getline() can also be used to grab an entire line from a file instead of just a token
    getline(inFS, lineString);
    while (!inFS.fail()) {  // fail() returns true if the previous stream op had an error
        cout << lineString << " ";  // Output the remaining values
        getline(inFS, lineString);
    }
    cout << "\n\n";

    // Check to see if the end of the file was reached
    if (!inFS.eof()) {  // Returns true if previous operation reached end of file
        cout << "Something failed before the end of the file was reached.\n";
    }

    cout << "Closing file values.txt\n";
    inFS.close();  // Not using it? CLOSE IT!

    return 0;
}

/* 
Input stream errors - state bits are updated depending on the stream's status
    Flag          Meaning                                                                  Function
 - goodbit    No error flags. Good stream                                                   good() - returns true if no stream errors
 - eofbit     End-of-file reached on extraction                                             eof() - returns value of eofbit
 - failbit    logical error for prev extraction/insertion                                   fail() - true if failbit or badbit is set
 - badbit     Error occurred while reading/writing, stream is bad. Further ops will fail    bad() - returns true if badbit is set
*/

// inFS.ignore() can be used to ignore the next character, such as a newline after a numeric input (can't hold newlines)
    // The extraction operator stops the input when whitespace is detected it but does not handle it.