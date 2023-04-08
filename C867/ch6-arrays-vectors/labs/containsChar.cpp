#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    /* Write a program that reads an integer, a list of words, and a character. The integer 
    signifies how many words are in the list. The output of the program is every word in the list
    that contains the character at least once. For coding simplicity, follow each output word by a
    comma, even the last one. Add a newline to the end of the last output. Assume at least one word
    in the list will contain the given character.  */
    
    vector<string> words;
    int numElements, i;
    string input;
    char target;

    cin >> numElements;

    for (i = 0; i < numElements; ++i) {
        cin >> input;
        words.push_back(input);    
    }

    cin >> target;

    for (i = 0; i < numElements; ++i) {
        if ((words.at(i)).find(target) != string::npos) {
            cout << words.at(i) << ',';
        }
    }

    cout << '\n';

    return 0;
}
