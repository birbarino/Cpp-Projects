#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Define a function named GetWordFrequency that takes a vector of strings and a search word as 
parameters. Function GetWordFrequency() then returns the number of occurrences of the search word
in the vector parameter (case insensitive).

Then, write a main program that reads a list of words into a vector, calls function GetWordFrequency() 
repeatedly, and outputs the words in the vector with their frequencies. The input begins with an integer 
indicating the number of words that follow.
*/

// Specification requires case insensitivity.
string ConvertLowercase(string str) {
    string lowerStr = "";
    unsigned int i;

    for (i = 0; i < str.length(); ++i) {
        lowerStr += tolower(str.at(i));
    }

    return lowerStr;
}

// Compare each item (as lowercase) in the list to a supplied word, returning how often that word occurs.
int GetWordFrequency(vector<string> wordsList, string currWord) {
    unsigned int i, freq = 0;
    string lowerLoopWord, lowerCurrWord;

    for (i = 0; i < wordsList.size(); ++i) {
        lowerLoopWord = ConvertLowercase(wordsList.at(i));
        lowerCurrWord = ConvertLowercase(currWord);

        if (lowerLoopWord == lowerCurrWord) {
            ++freq;
        }
    }

    return freq;
}

int main() {
    vector<string> words;
    vector<int> frequencies;
    string input;
    unsigned int numElements, i;
    
    cin >> numElements;

    // Store values into vector of words
    for (i = 0; i < numElements; ++i) {
        cin >> input;
        words.push_back(input);
    }

    // For each word, get its frequency in a given list, then store in a new vector
    for (i = 0; i < numElements; ++i) {
        frequencies.push_back(GetWordFrequency(words, words.at(i)));
    }

    // Output results
    for (i = 0; i < numElements; ++i) {
        cout << words.at(i) << " " << frequencies.at(i) << '\n';
    }

    return 0;
}
