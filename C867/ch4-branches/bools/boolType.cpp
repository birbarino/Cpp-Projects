#include <iostream>
#include <string>
using namespace std;

int main() {
    string sound;
    bool isDuck;

    cout << "If you were an animal, what would you say (quack, moo, etc.)? ";
    getline(cin, sound);
    
    if (sound == "quack") {
        isDuck = true;
    } else {
        isDuck = false;
    }

    if (isDuck) {
        cout << "Looks like you may be a duck... or a witch!\n";
    } else {
        cout << "You are safe for now.";
    }

    return 0;
}