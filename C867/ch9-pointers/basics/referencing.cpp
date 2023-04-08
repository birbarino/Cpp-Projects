#include <iostream>
using namespace std;

int main() {
    int someInt;
    int* intPointer = &someInt; // Declaring a pointer var, which stores a mem addr for the type
                                // Use the reference operator (&) to get a variable's address

    cout << "Variable someInt was declared at the address of " << &someInt << '\n';
    cout << "Again, that's " << intPointer << '\n';   // iPointer points to someInt's mem location.

    // Dereferencing a pointer - retrieves the data stored at the mem location
    someInt = 15;
    cout << "Data in someInt: " << someInt << '\n';
    cout << "Data in intPointer (dereferenced): " << *intPointer << '\n';

    cout << "Executing '*intPointer = 20' to change someInt's value.\n";
    *intPointer = 20;

    cout << "Data in someInt: " << someInt << '\n';
    cout << "Data in intPointer (dereferenced): " << *intPointer << '\n';

    return 0;
}