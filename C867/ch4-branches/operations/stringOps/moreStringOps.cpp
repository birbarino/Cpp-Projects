#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "It's bananas, b-a-n-a-n-a-s!\n";
    string example = "Example.\n";
    int temp;

    cout << "Operations performed on the following strings:\n----------------------------------------------\n" << str << example << "\n";

    
    // str.find(<char> or <string>) returns the index of first occurrence.
    cout << str.find("bananas") << "\n";
    cout << str.find('s', 11) << "\n";  // starts at index 11
    
    if (str.find('z') == string::npos)  // returns string::npos, which is called with functions fail
        cout << "There is no 'z' in the \"bananas\" string.\n\n";  


    // str.substr(index, length) returns string starting at index for the next "length" chars.
    cout << example.substr(0, 2) << "\n";; // return "Ex"
    cout << example.substr(example.size() - 4, 4) << "\n";  // return last 4 (including newline)


    // str.push_back(char) appends char to end of string
    str.at(str.length() - 1) = '!'; // Replace newline with another '!'
    str.push_back('\n');    // Add newline to the end of the string
    cout << str << "\n";


    // example.insert(index, substring) inserts the substring at the given index
    example.insert(example.length() - 2, " string");
    cout << example << "\n";


    // example.replace(index, num, substring) replaces characters from index to index+num+1 with a copy of substring
    temp = example.find(' ');
    example.replace(temp + 1, example.length()-(temp + 3), "other word");
    cout << example << "\n";


    // string concatenation
    str = str + example;
    cout << str;

    return 0;
}