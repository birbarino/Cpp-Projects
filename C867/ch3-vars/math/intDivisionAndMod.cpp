#include <iostream>
using namespace std;

int main() {
    // Dividing two ints truncates any decimal
    cout << 1 / 3 << "\n";
    cout << 3 / 2 << "\n";

    // Throwing a float into the mix makes the result a float as well
    cout << 3 / 16.2 << "\n";
    cout << 91.4 / 2 << "\n";

    // Module is... well, modulo. ONLY WORKS WITH INTEGERS
    cout << 12 % 5 << "\n";

    int userMinutes;     // User input: Minutes
    int outHours;    // Output hours
    int outMinutes;    // Output minutes (remaining)    

    cout << "Enter minutes: ";
    cin    >> userMinutes;    

    outHours     = userMinutes / 60;
    outMinutes = userMinutes % 60;    

    cout << userMinutes << " minutes is " << outHours    << " hours and " << outMinutes    << " minutes.\n"; 

    return 0;
}
