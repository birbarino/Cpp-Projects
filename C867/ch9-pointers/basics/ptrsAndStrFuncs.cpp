#include <iostream>
#include <cstring>  // The operations below require the C String library.
using namespace std;

int main() {
    // "Char arrays"
    char str1[9] = "Hi there";   // Nullchar appended
    char str2[20];
    char* sub = nullptr;

    cout << str1 << '\n';

    // Each function requires char* or const char* as arguments
    // Search functions

    // strchr(stringToSearch, charToFind) -- returns char pointer
    if (strchr(str1, 'e') != nullptr) { // Search for a character in a C string
        sub = strchr(str1, 'e');
        
        // strcpy(char* dest, const char* src) -- copies src to dst
        strcpy(str2, sub);  // str2 == "ere"

        cout << str2 << '\n';
    }

    // strrchr(stringToSearch, charToFind) -- returns char pointer
    if (strrchr(str1, 'e') != nullptr) { // Search for a character in a C string in REVERSE
        sub = strrchr(str1, 'e');
        strcpy(str2, sub);  // str2 == "e"

        cout << str2 << '\n';
    }

    // strstr(stringToSearch, stringToFind) -- returns char pointer
    if (strstr(str1, "there") != nullptr) { // Search for a string in a given string
        cout << "str1 contains \"there\"\n";
    }

    // A semi-useful example
    char fileName[9] = "calc.exe";
    char extension[5];
    char* ptrToDot = strrchr(fileName, '.');
    
    char* fileExtension = strcpy(extension, ptrToDot);

    cout << fileExtension << '\n';    

    return 0;
}