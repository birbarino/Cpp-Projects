#include <iostream>
using namespace std;

class Example {
    public:
        Example();  // Default constructor
        Example(int value);  // Constructor with param
        Example(const Example& origObject);  // Copy constructor
        ~Example();  // Destructor

        void SetDataObject(const int val) { *dataObject = val; }
        int GetDataObject() const { return *dataObject; }
    
    private:
        int* dataObject;
};

// Default constructor
Example::Example() {
    cout << "Default constructor called\n";
    dataObject = new int;  // Dynamically allocated in memory
    *dataObject = 0; 
}

// Constructor with param
Example::Example(int value) {
    cout << "Constructor called\n";
    dataObject = new int;
    *dataObject = value;
}

// Copy constructor -- deep copy 
// Called when an object is passed by reference to a function or when an object is declared as a copy
Example::Example(const Example& origObject) {
    cout << "Copy constructor called\n";
    dataObject =  new int;  // Allocate a new sub-object
    *dataObject = *(origObject.dataObject);

    // Deep copy - all data members (pointers and values) are copied. Recommended for objects with
    // data members pointing to dynamically allocated memory (where "new" is used)

    // Shallow copy - only data member values are copied - usually find and done by default
    // e.g., newObj.member1 = origObj.member1
}

// Destructor -  deleted anything dynamically allocated memory
Example::~Example() {
    cout << "Destructor called\n";
    delete dataObject;
}

void Func(Example localObj) {    // Local copy created, copy constructor called, deep copy made
    // Do something
    // After executing, local object is destroyed
}       

int main() {
    Example original;
    original.SetDataObject(19);

    cout << "Before: " << original.GetDataObject() << '\n';
    Func(original);
    cout << "After: " << original.GetDataObject() << '\n';  // Value retained with copy constructor

    // Other ways to call the copy constructor
    Example copy1 = original;
    Example* copy2 = new Example(original);
    
    delete copy2;

    return 0;
}