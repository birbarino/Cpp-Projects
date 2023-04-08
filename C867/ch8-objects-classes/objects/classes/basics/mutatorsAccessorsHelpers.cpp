#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MagicCard {
    public:
        void SetName(string cardName) { // Mutator
            name = cardName;
            CapitalizeEachWord(name);
        }

        void SetManaValue(int manaValue) { // Mutator
            mv = manaValue;
        }

        void SetManaCost(string manaCost) { // Mutator
            cost = manaCost;
        }

        void Print() { // Accessor
            cout << "Name: " << name << " - Mana value: " << mv << " - Mana cost: " << cost << "\n";
        }

    private:
        // Initialized values
        string name = "NoName", cost = "NoCost"; 
        int mv = -1;

        void CapitalizeEachWord(string& str);   // Private helper method

};

// Cannot be called from main
void MagicCard::CapitalizeEachWord(string& str) {
    unsigned int i;

    for (i = 0; i < str.length(); ++i) {
        if (i == 0) {
            str.at(i) = toupper(str.at(i));
        } else if (str.at(i-1) == ' ') {
            str.at(i) = toupper(str.at(i));
        }
    }
}

int main() {
    MagicCard card;
    
    card.Print();   // Print default values

    card.SetName("lightning bolt");
    card.SetManaValue(1);
    card.SetManaCost("R");
    card.Print();

    return 0;
}