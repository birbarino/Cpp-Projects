#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MagicCard {
    public:
        MagicCard();    // Compilers automatically do this implicitly, this just lets you do something special when an object is constructed.

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

        void Print() {
            cout << "Name: " << name << " - Mana value: " << mv << " - Mana cost: " << cost << "\n";
        }

    private:
        string name, cost; 
        int mv;

        void CapitalizeEachWord(string& str);

};

// This is a default constructor - invkoed inside the class definition at line 8
MagicCard::MagicCard() {
    // Set default values
    name = "NoName", cost = "NoCost";   // Make sure you only initilize variables, not declare them!!
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

int main() {
    vector<MagicCard> cards(60); // Automatically calls the default constructor for each value
    MagicCard card;
    int hold; 

    cards.at(0).Print();   // Print default values (top card)

    card.SetName("lightning bolt");
    card.SetManaValue(1);
    card.SetManaCost("R");
    card.Print();

    cin >> hold;

    return 0;
}