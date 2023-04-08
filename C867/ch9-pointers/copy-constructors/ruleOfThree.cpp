#include <iostream>
using namespace std;

// Classes have three special member functions that are typically implemented together:
//   1. Destructor - change how "delete" works
//   2. Copy constructor - define how the object should be copied when instatiated
//   3. Copy assignment operator - override the "="'s behavior

// The Rule of Three means that if any of the above are defined, all of them should be.

// BEGIN Example class
class Example {
    public:
        Example();  // Default constructor
        Example(int value);  // Constructor with param

        // The Rule of Three
        ~Example();  // Destructor
        Example(const Example& objToCopy);  // Copy constructor
        Example& operator=(const Example& objToCopy);  // Copy assignment op

        void SetDataObject(const int val) { *dataObject = val; }
        int GetDataObject() const { return *dataObject; }
    
    private:
        int* dataObject;
};

// Default constructor
Example::Example() {
    cout << "Default constructor called\n";
    dataObject = new int;
    *dataObject = 0; 
}

// Constructor with param
Example::Example(int value) {
    cout << "Constructor called\n";
    dataObject = new int;
    *dataObject = value;
}

// Destructor
Example::~Example() {
    cout << "Destructor called\n";
    delete dataObject;
}

// Copy constructor
Example::Example(const Example& objToCopy) {
    cout << "Copy constructor called\n";
    dataObject =  new int; 
    *dataObject = *(objToCopy.dataObject);
}

Example& Example::operator=(const Example& objToCopy) {
    cout << "Assignment operator called\n";

    if (this != &objToCopy) {                   // 1. DON'T SELF ASSIGN
        delete dataObject;                      // 2. Delete old dataObject
        dataObject = new int;                   // 3. Allocate new dataObject
        *dataObject = *(objToCopy.dataObject);  // 4. Copy dataObject
    }

    return *this;   // Dereference the this pointer to return the object itself
}

// END Example class

void Func(Example localObj) {
    // Do something
}       

int main() {
    Example original;
    Example copy1;
    Example* copy2 = new Example(original);  // Copy constructor (new used)
    Example copy3 = original;  // Copy constructor (declaration + assignment)

    original.SetDataObject(12);

    cout << "Modifying Copy #2...\n";
    copy2->SetDataObject(12000);
    
    copy1 = original;  // Call the assignment op override

    cout << '\n';

    cout << "Original: " << original.GetDataObject() << '\n';
    cout << "Copy #1: " << copy1.GetDataObject() << '\n';
    cout << '\n';

    cout << "Original: " << original.GetDataObject() << '\n';
    cout << "Copy #2: " << copy2->GetDataObject() << '\n';
    cout << '\n';

    cout << "Original: " << original.GetDataObject() << '\n';
    cout << "Copy #3: " << copy3.GetDataObject() << '\n';
    cout << '\n';

    return 0;
}