#include <iostream>
using namespace std;

class Example {
    public:
        Example() {  // Constructor
            cout << "~~Constructor called~~\n";
            dataObject = new int;
            *dataObject = 0; 
        }

        ~Example() {  // Destructor
            cout << "~~Destructor called~~\n";
            delete dataObject;  // Prevent memory leaks
        }

        void SetDataObject(const int val) { *dataObject = val; }
        int GetDataObject() const { return *dataObject; }
    
    private:
        int* dataObject;
};

void Func(Example localObj) {    // Local copy created, constructor not called
    // Do something
    // After executing, local object is destroyed
}

int main() {
    Example value;

    value.SetDataObject(9);

    cout << "Before: " << value.GetDataObject() << '\n';
    
    Func(value);    // Passed by value, not be reference

    cout << "After: " << value.GetDataObject() << '\n'; // Nested objects are not copied

    return 0;
    // Program crashes after trying to delete objects - calls destructor but cannot free what is already freed
}