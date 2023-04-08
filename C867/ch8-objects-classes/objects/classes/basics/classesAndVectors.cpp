#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MagicCard {
    public:
        MagicCard();

        // Setters
        void SetName(string cardName) {
            name = cardName;
            CapitalizeEachWord(name);
        }

        void SetManaValue(int manaValue) {
            mv = manaValue;
        }

        void SetManaCost(string manaCost) {
            cost = manaCost;
        }

        // Getters
        string GetName() const { return name; }
        string GetManaCost() const { return cost; }
        int GetManaValue() const { return mv; }

        // Misc.
        void Print() {
            cout << "Name: " << name << " - Mana value: " << mv << " - Mana cost: " << cost << "\n";
        }

    private:
        string name, cost; 
        int mv;

        void CapitalizeEachWord(string& str);
};

MagicCard::MagicCard() {
    name = "NoName", cost = "NoCost";
    mv = -1;
}

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
// END MagicCard class

class MagicDeck {
    public:
        MagicDeck(unsigned int size); 
        void PrintCardNames() {
            for (unsigned int i = 0; i < deck.size(); ++i) {
                cout << deck.at(i).GetName() << "\n";
            }
        }

    private:
        vector<MagicCard> deck;
};

MagicDeck::MagicDeck(unsigned int size) {
    deck.resize(size);
}
// END MagicDeck Class

int main() {
    vector<MagicCard> deck(40);    // Create 40-card deck
    MagicDeck sideboard(15);    // Create a 15-card sideboard (any number works for this, though)

    deck.at(0).Print();    // Print first card (has default values)
    sideboard.PrintCardNames();  // Print all cards

    return 0;
}