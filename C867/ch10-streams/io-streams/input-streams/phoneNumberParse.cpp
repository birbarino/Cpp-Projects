// Copied and pasted from zyBooks 10.3: Input string stream

/* The example below reads in phone numbers in two different formats and then presents the phone
 numbers in a standard 10-digit format. American phone numbers include an area code (3 digits), 
 central office code (3 digits), and station number (4 digits). The program uses an input string 
 stream to read each portion of the phone number, the ios good() function to determine if the area 
 code entered consists solely of integers, and two dummy characters to read and determine if valid 
 phone number delimiters were used. If the area code does not contain solely integers or the 
 delimiters are not valid, the string stream is placed into an error state, and an error message is 
 output. The program outputs all valid phone numbers in a standardized format. 
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    istringstream inSS;        // Input string stream
    string lineString;         // Holds line of text
    int     areaCode;            // Area code (3 digits)
    int     officeCode;         // Central office code (3 digits)
    int     stationNum;         // Station number (4 digits)
    char    dummyChar1;
    char    dummyChar2;
    bool    isValidNumber;
    
    cout << "Enter a 10-digit phone number (or -1 to exit):" << endl;
    getline(cin, lineString);
    
    while (lineString != "-1") {
        isValidNumber = false; // Set to false before extracting phone number
        dummyChar1 = ' '; // Reset dummy chars to character other than - and (
        dummyChar2 = ' ';

        // Copy input to inSS's string buffer
        inSS.clear();
        inSS.str(lineString);
        
        // Try extracting area code.
        inSS >> areaCode;
        if (inSS.good()) {  // Check if istringstream is in an error state
            // Number format should be ###-###-####
            inSS >> dummyChar1 >> officeCode >> dummyChar2 >> stationNum;
            
            if (inSS.eof() && dummyChar1 == '-' && dummyChar2 == '-') {
                isValidNumber = true;
            }
        }
        else {
            // Number format should be (###) ###-####

            // Clear inSS state, and try extracting with area code in ()
            inSS.clear();
            inSS >> dummyChar1 >> areaCode >> dummyChar2;
            if (inSS.good()  && dummyChar1 == '(' && dummyChar2 == ')') {
                // Extract office code, then -, and then station number
                inSS >> officeCode >> dummyChar1 >> stationNum;
                if (inSS.eof() && dummyChar1 == '-') {
                    isValidNumber = true;
                }
            }
        }

        if (isValidNumber) {
            cout << "    Standardized format: (" << areaCode << ") "
                  << officeCode << "-" << stationNum << endl << endl;
        }
        else {
            cout << "    Invalid phone number." << endl << endl;
        }
        
        // Get next user input
        getline(cin, lineString);
    }
    
    return 0;
}