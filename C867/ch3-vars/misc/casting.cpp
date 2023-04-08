#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int magicCardsInDeck = 60;
    int magicCardsInHand = 7;
    int magicCardsInGraveyard = 3;

    // static_cast<type>(expression) operator converts expression's value into the given type.
    double percentCardsOutOfDeck = static_cast<double>(magicCardsInHand + magicCardsInGraveyard) / static_cast<double>(magicCardsInDeck);    // allows floating-point division to occur (though converting one works)
    cout << fixed << setprecision(4) << percentCardsOutOfDeck;

    return 0;
}
