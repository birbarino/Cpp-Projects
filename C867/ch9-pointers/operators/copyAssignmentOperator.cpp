#include <iostream>
using namespace std;

class Example {
    public:
        Example();  // Default constructor
        Example(int value);  // Constructor with param
        ~Example();  // Destructor
        // Example(const Example& origObject);  // Copy constructor

        Example& operator=(const Example& objToCopy);

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

Example& Example::operator=(const Example& objToCopy) {  // Pass by reference so as to not create a copy that gets destroyed
    cout << "Assignment operator called\n";

    // Similar to copy constructor
    if (this != &objToCopy) {                   // 1. DON'T SELF ASSIGN
        delete dataObject;                      // 2. Delete old dataObject
        dataObject = new int;                   // 3. Allocate new dataObject
        *dataObject = *(objToCopy.dataObject);  // 4. Copy dataObject
        // This pattern can be used for any other data members that need to be copied
    }

    return *this;   // Dereference the this pointer to return the object itself
}

/*
// Copy constructor - kept for informative purposes
Example::Example(const Example& origObject) {
    cout << "Copy constructor called\n";
    dataObject =  new int; 
    *dataObject = *(origObject.dataObject);
}
*/

// Destructor
Example::~Example() {
    cout << "Destructor called\n";
    delete dataObject;
}

void Func(Example localObj) {
    // Do something
}       

int main() {
    Example original;
    Example copy;

    original.SetDataObject(12);
    
    copy = original;  // Call the assignment op override

    cout << "Original: " << original.GetDataObject() << '\n';
    cout << "Copy: " << copy.GetDataObject() << '\n';

    return 0;
}