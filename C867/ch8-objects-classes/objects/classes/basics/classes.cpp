#include <iostream>
#include <string>
using namespace std;

class MagicCard {   // Defines a new datatype with "member functions" (methods) 
    public: // public member functions can be invoked by the user
        void SetName(string cardName);  // Function declaration

        // Inline member function definition - long function definitions should not be inlined for less clutter
        void SetManaValue(int manaValue) { 
            mv = manaValue;
        }

        void SetManaCost(string manaCost) {    
            cost = manaCost;
        }

        void Print() {
            cout << "Name: " << name << "\nMana value: " << mv << "\nMana cost: " << cost << "\n";
        }

    private: // Not user accessible
        string name, cost;  // Vars in classes can be declared after they are referenced
        int mv;

};  // Semicolon required after class definition

// Function definitions - provide a process when invoked on an object
void MagicCard::SetName(string cardName) {  // Definition must match declaraion
    // Foo::Bar() -- "::" AKA "scope resolution operator"
    name = cardName;
}

int main() {
    // Instantiate and poplulate object, then print populated features
    MagicCard card;
    card.SetName("Lightning Bolt");
    card.SetManaValue(1);
    card.SetManaCost("R");
    card.Print();

    return 0;
}