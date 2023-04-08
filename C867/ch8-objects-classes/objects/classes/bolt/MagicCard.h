// Header files usually include member function DECLARATIONS
#ifndef MAGICCARD_H
#define MAGICCARD_H

#include <string>
using namespace std;

class MagicCard {
    public:
        MagicCard();

        // Setters
        void SetName(string cardName);
        void SetManaValue(int manaValue);
        void SetManaCost(string manaCost);

        // Getters
        string GetName() const;
        string GetManaCost() const;
        int GetManaValue() const;

        // Misc.
        void Print();

    private:
        string name, cost; 
        int mv;

        // Helpers
        void CapitalizeEachWord(string& str);
};

#endif