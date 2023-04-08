#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int input, max = 0, total = 0, counter = 0;
    float avg;

    cin >> input;

    while(input >= 0)  {
        if (input > max) {
            max = input;
        }

        total += input;

        ++counter;
        cin >> input;
    }

    avg = (float)total / counter;

    cout << max << " " << fixed << setprecision(2) << avg << "\n";

    return 0;
}