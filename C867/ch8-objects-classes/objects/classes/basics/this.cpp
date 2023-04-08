#include <iostream>
#include <string>
using namespace std;

class MagicCard {
    public:
        MagicCard();
        MagicCard(string name, string manaCost, int manaValue);

        void SetName(string name);
        void SetManaCost(string manaCost) { cost = manaCost; }
        void SetManaValue(int manaValue) { mv = manaValue;}

        string GetName() const { return name; }
        string GetManaCost() const { return cost; }
        int GetManaValue() const { return mv; }

        void Print();

    private:
        string name, cost; 
        int mv;

        void CapitalizeEachWord(string& str);
};

MagicCard::MagicCard() {
    name = "NoName", cost = "NoCost";
    mv = -1;
}

MagicCard::MagicCard(string name, string manaCost, int manaValue) {
    // Use "this" to access implicitly-passed object pointers. -- this->member
    this->name = name;  // Statement is basically "this objects variable named 'name' is going to be the provided argument 'name'"

    cost = manaCost;
    mv = manaValue;
}

void MagicCard::SetName(string name) {
    // this-> notation makes it clear when data members are being accessed instead of a local variable, param, etc.
    this->name = name;  // "->" is the member access operator for a pointer ("." is the operator for non-pointers)
    CapitalizeEachWord(this->name);
}

void MagicCard::Print() {
    cout << "Name: " << name << " - Mana value: " << mv << " - Mana cost: " << cost << "\n";
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
    MagicCard card("Lightning Bolt", "R", 1);
    card.Print();   // When calling a member function, the object is implicitly passed as a param., etc. Print(card)

    card.SetName("Shock");
    card.Print();

    return 0;
}