#include <iostream>
using namespace std;

/*
  The Fibonacci sequence begins with 0 and then 1 follows. All subsequent values are the sum of the
  previous two, for example: 0, 1, 1, 2, 3, 5, 8, 13. Complete the Fibonacci() function, which has
  an index, n, as parameter and returns the nth value in the sequence. Any negative index values
  should return -1.
*/

int Fibonacci(int n) {
    int i, curr, prev, next;

    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return 0;
    } else {
        for (i = 0; i < n; ++i) {
            if (i == 0) {
                curr = 1;
                prev = 0;
                next = curr + prev;
                continue;
            }

            next = curr + prev;
            prev = curr;
            curr = next;
        }

        return next;
    }
}

int main() {
    int startNum;

    cin >> startNum;
    cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

    return 0;
}