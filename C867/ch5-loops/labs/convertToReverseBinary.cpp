#include <iostream>
using namespace std;

int main() {
    unsigned int input; // Only accept positive input

    cout << "Please provide a positive int to be converted into binary (but reversed).  ";
    cin >> input;

    while(input > 0)  {
        cout << input % 2;
        input /= 2;
    }

    cout << "\n";

    return 0;
}