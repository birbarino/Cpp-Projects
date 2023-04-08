// Memory leaks occur when a program allocates memory, then loses the ability to access it.
// This is typically caused by failure to properly free dynamically allocated memory.

// May cause program to use more and more memory as the program runs and eventually crash if 
// system resources are fully utilized.

// Always free memory that is no longer being used!

#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass();
        // ~MyClass();
    private:
        int* subObject;
};

MyClass::MyClass() {
    subObject = new int;    // Allocate sub-object
    *subObject = 0;
}

/*

MyClass::~MyClass() {
    delete this->subObject;
}

*/


int main() {
    // Prepare for lots of memory leaks!
    MyClass* tempClassObject;

    tempClassObject = new MyClass; 
    delete tempClassObject; // ERROR: Memory leak 
    // Freed obj's mem, but not subObject's


    MyClass* ptrOne = new MyClass;  // Allocate memory for obj
    MyClass* ptrTwo = new MyClass;  // Allocate memory for obj
    // MyClass* ptrThree;

    // ptrThree = ptrOne;   // Prevents memory leak
    ptrOne = ptrTwo;    // ERROR: Memory leak
    // ptrOne's memory location is no longer accessible (ptrOne == ptrTwo, ptrTwo == ptrTwo)

    return 0;
}


// Garbage collection: automatic behavior that finds all unreachable allocated locations and frees
