#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// String streams allow you to read input data from a string instead of a keyboard
int main() {
    string pet = "dog Birdie Shepherd-mix black 7";  // Input string
    string animal, name, breed, color;               // String characteristics
    istringstream inSS(pet);                         // Input string stream - derived from istream
    int age;                                         // Int characteristic
    string data;                                     // Used later to hold stuff

    // istring streams work a bit like cin and can be extracted. Each token is stored in a variable
    inSS >> animal;
    inSS >> name;
    inSS >> breed;
    inSS >> color;
    inSS >> age;

    // Output parsed values
    cout << "I love my " << animal << ", " << name << ", who is a " << color << " " << breed << " and is " << age << " years old.\n";

    // --------------------------------------------------------------------------------------------
    // getline() can also be used with string streams.
    // Common use for string streams to to process line-by-line.
    string input;

    cout << "What about your pet? Provide: animal Name breed color age\n";
    getline(cin, input);

    inSS.clear();  // Required to reset the state of the stream for subsequent extractions
    inSS.str(input);  // Copy input into inSS's string buffer

    // Parsing
    inSS >> animal >> name >> breed >> color >> age;

    // Output parsed values
    cout << "You have a " << animal << ", " << name << ", who is a " << color << " " << breed << " and is " << age << " years old.\n";

    // --------------------------------------------------------------------------------------------
    // Reaching the end of a stream no matter the length can be done with a loop
    cout << "\nGreat, now just give me some input and I can repeat it back to you. Go on! Do it!\n";

    getline(cin, input);
    
    inSS.clear();   // Required or else weird behavior
    inSS.str(input);

    // while will implicitly call the eof() function for input streams to see if EOF is reached.
    // If eof() is true, inSS >> data will return false so as to not continue reading data.
    while (inSS >> data) {  // Once a token is extracted, true is returned. Otherwise, false (EOF)
        cout << data << '\n';
    }
    
    return 0;
}