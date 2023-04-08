#include <iostream>
#include <fstream>
using namespace std;

void writeHTMLFile(ofstream& out, string innerHTML) {
    out << "<!DOCTYPE html>\n";
    out << "<html>\n";
    out << "  <body>\n";
    out << "    <p>" << innerHTML << "</p>\n";
    out << "  </body>\n";
    out << "</html>\n";
}

// Output to a file rather than a screen
int main() {
    ofstream outFS;
    outFS.open("output.txt");

    if (!outFS.is_open()) {  // Verify file was successfully opened
        cout << "output.txt could not be opened\n";
        return 1;
    }

    outFS << "Hello World!\n";  // Just like cout -- ofstream inherits from ostream, like cout does
    outFS.close();

    // Another example of using ofstreams
    outFS.open("output.html");
    
    if (!outFS.is_open()) {
        cout << "output.html could not be opened\n";
        return 1;
    }

    writeHTMLFile(outFS, "Hello World!");
    outFS.close();

    return 0;
}