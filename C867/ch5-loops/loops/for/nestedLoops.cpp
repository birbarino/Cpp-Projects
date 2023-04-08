#include <iostream>
using namespace std;

int main() {
    int numRows;
    int numColumns;
    int currentRow;
    char currentColumnLetter;

    cout << "Welcome to the movie theater seat labeler.\n";

    cout << "How many rows are there? ";
    cin >> numRows;
    cout << "How many columns are there? ";
    cin >> numColumns;

    for (int i = 0; i < numRows; ++i) {
        currentRow = 1 + i;
        currentColumnLetter = 'A';
        for (int j = 0; j < numColumns; ++j) {
            cout << currentRow << currentColumnLetter << " ";
            ++currentColumnLetter;
        }
        
        ++currentRow;
    }

    return 0;
}