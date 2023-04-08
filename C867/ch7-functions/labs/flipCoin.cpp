#include <iostream>
#include <cstdlib>
using namespace std;

string CoinFlip(int& numHeads, int& numTails) {
    if (rand() % 2 == 1) {
        ++numHeads;
        return "Heads";
    } else {
        ++numTails;
        return "Tails";
    }
}

int main() {
    int numCoinFlips, numHeads = 0, numTails = 0;    
    srand(time(NULL));  // Initialize random seed

    cout << "How many times do you want to flip a coin? ";
    cin >> numCoinFlips;

    for (int i = 0; i < numCoinFlips; ++i) {
        cout << CoinFlip(numHeads, numTails) << '\n';
    }

    cout << "Total Heads: " << numHeads << '\n';
    cout << "Total Tails: " << numTails << '\n';

    return 0;
}
