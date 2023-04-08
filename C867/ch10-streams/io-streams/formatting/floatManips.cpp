#include <iostream>
#include <iomanip>  // I/O manipulator -- overloads << and >> operators among other things
// Other manipulators are defined in the "ios" libraries in the std namespaces
using namespace std;

int main() {
    float miles = 654.321;

    // Set max digits in a number and round up (how precise the float is)
    cout << "setprecision(p) sets number of digits\n";
    cout << miles << " (default for p is 6)\n";
    cout << setprecision(8) << miles << " (p = 8)\n";
    cout << setprecision(5) << miles << " (p = 5)\n";
    cout << setprecision(2) << miles << " (p = 2)\n";

    // fixed = fixed point notation
    cout << fixed;  // each operator/function remains on once called
    cout << "fixed: " << miles << '\n';

    // scientific = scientific notation
    cout << scientific;
    cout << "scientific: " << miles << '\n';

    cout << setprecision(10) << miles << " (p = 10 and scientific)" << '\n';

    float yards = 100.0;

    cout << fixed << setprecision(0);
    cout << yards << '\n';

    // showpoint will always show the decimal, even when the number ends in .0
    cout << showpoint;
    cout << setprecision(1);
    cout << "showpoint: " << yards << '\n';

    return 0;
}