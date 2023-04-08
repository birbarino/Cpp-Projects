#include <iostream>
using namespace std;

/* Memory is usually split up into 4 sections
    - Code: Where the program's instructions are stored.
    - Static memory: Where global and local static variables are allocated.
    - Stack: Where a function's local variables are allocated during a call. Adds local variables,
            then removes them with a return. AKA "automatic memory" as it's auto (de)allocated.
    - Heap: Where the "new" operator allocates memory/where "delete" deallocates. AKA "free store".
*/

int global = 123;   // In static memory

int doubleInt(int x) {  // x is on stack
    x *= 2;
    return x;
}

int main() {
    static int num = 200;   // In static memory
    int i;                  // On stack

    int* myInt = new int;   // In heap
    *myInt = 0;

    for (i = 0; i < 10; ++i) {
        *myInt += doubleInt(num);   // Stack grows, then shrinks automatically
        *myInt /= 9;
    }

    cout << *myInt << '\n';
    delete myInt;                   // Deallocated from heap

    cout << doubleInt(global) << '\n';  // Stack grows and shrinks

    return 0;
}