#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    /*Write a program that reads a list of words. Then, the program outputs those words and their 
    frequencies. The input begins with an integer indicating the number of words that follow. 
    Assume that the list will always contain fewer than 20 words.*/

    vector<string> words;
    vector<int> frequencies;
    string input, currStr;
    int numElements, freq, i, j;
    
    cin >> numElements;

    // Store values into vector of words
    for (i = 0; i < numElements; ++i) {
        cin >> input;
        words.push_back(input);
    }

    // Determine frequency of each word in one vector and store in another vector
    for (i = 0; i < numElements; ++i) {
        // Grab current element and reset frequency count
        currStr = words.at(i);
        freq = 0;

        // Look at all elements and count where it is equal
        for (j = 0; j < numElements; j++) {
            if (words.at(j) == currStr) {
                ++freq;
            }
        }

        frequencies.push_back(freq);
    }

    // Output results
    for (i = 0; i < numElements; ++i) {
        cout << words.at(i) << " - " << frequencies.at(i) << '\n';
    }

    return 0;
}
