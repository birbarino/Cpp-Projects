#include <iostream>
#include <vector>
#include "MagicCard.h"
using namespace std;

int main() {
    MagicCard bolt;
    
    bolt.SetManaCost("R");
    bolt.SetName("Lightning Bolt");
    bolt.SetManaValue(1);

    bolt.Print();

    return 0;
}

// Compile by doing "g++ -Wall MagicCard.cpp main.cpp"