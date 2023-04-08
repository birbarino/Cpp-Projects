#include <iostream>
using namespace std;

int main() {
    int result = 100000 * 100000;     // too small, result needs way more than 32 bits (4,294,967,296 max values or -2.147 mil to 2.147 mil)
    long int resultLong = (long int)100000 * 100000;    // still too small

    // NOTE: "long int" and long long int" can be shortened to "long" or "long long" to use their specifiers, which indicate they are of type "long int", etc.
    long long resultDubLong = (long long int)100000 * 100000;     // convert int operand to long long int before assigning to a spot in memory

    cout << result << endl;
    cout << resultLong << endl;
    cout << resultDubLong << endl;

    return 0;
}
