#include <iostream>
#include <cstdlib>    // Required for rand() and srand() function
#include <ctime>    // Required for time() function
using namespace std;

int main() {
    srand(time(NULL));  // Set random seed
    cout << rand() << "\n";    // A single random int from 0 to RAND_MAX
    cout << rand() % 10 << "\n";    // Random int from 0-9
    cout << rand() % 21 + 10 << "\n";    // Random int from 10-20
    cout << rand() % 2 << "\n";    // Like flipping a coin
    cout << rand() % 3 + 1 << "\n";

    cout << "RAND_MAX: " << RAND_MAX << "\n";    // A machine dependent value, mine being 32,767

    // In a range (x, y), numValues = y - x + 1
    // i.e. range 0-5, number of values within range is 5 - 0 + 1, which equals 6 -- 0, 1, 2, 3, 4, 5.
    // This also means that the modulus will be numValues, i.e. "rand() % 6" returns random int from 0-5

    return 0;
}
