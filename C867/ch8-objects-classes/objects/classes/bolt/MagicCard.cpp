// Source code files usually include member function DEFINITIONS
#include <iostream>
#include "MagicCard.h"
using namespace std;

MagicCard::MagicCard() {
    name = "NoName", cost = "NoCost";
    mv = -1;
}

// Setters
void MagicCard::SetName(string cardName) {
    name = cardName;
    CapitalizeEachWord(name);
}

void MagicCard::SetManaValue(int manaValue) { mv = manaValue;}
void MagicCard::SetManaCost(string manaCost) { cost = manaCost; }

// Getters
string MagicCard::GetName() const { return name; }
string MagicCard::GetManaCost() const { return cost; }
int MagicCard::GetManaValue() const { return mv; }

// Misc.
void MagicCard::Print() {
    cout << "Name: " << name << " - Mana value: " << mv << " - Mana cost: " << cost << "\n";
}

// Helper
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