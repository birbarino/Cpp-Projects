#include <iostream>
using namespace std;

int main() {
    // You can use scientific notation like you would while writing it.
    double avogadrosNum = 6.02e23; // Approximation of atoms per mole
    double gramsPerMoleGold = 196.9665;
    double gramsGold;
    double atomsGold;

    cout << "How many grams of gold do you have? ";
    cin >> gramsGold;

    atomsGold = gramsGold / gramsPerMoleGold * avogadrosNum;

    cout << gramsGold << " grams of gold has " << atomsGold << " atoms.\n";

    return 0;
}
