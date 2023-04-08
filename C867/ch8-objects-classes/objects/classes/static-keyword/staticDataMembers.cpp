#include <iostream>
#include <string>
using namespace std;

// The "static" keyword indicated that a variable is allocated memory ONCE during execution.
// It reside's in the static region of a program's memory and retains a value throughout execution.

// In a class, a static data member is a DM of the whole class, not just an object.
// They are independent of classes and can be accessed without creating an object.
// It is declared inside the class, but must be declared outside as well.

class Store {
    public:
        Store(string storeName, string storeType);
        int getId();
        static int nextId;    // Declare static member variable
    private:
        string name = "None";
        string type = "None";
        int id = 0;
};

Store::Store(string storeName, string storeType) {
    name = storeName;
    type = storeType;
    id = nextId;    // Assign object id with nextId
        
    ++nextId;        // Increment nextId for next object to be created
}

int Store::getId() {
    return id;
}

int Store::nextId = 101; // Define and initialize static data member

int main() {
    Store store1("Macy's", "Department");
    Store store2("Albertsons", "Grocery");
    Store store3("Ace", "Hardware");

    cout << "Store 1's ID: "<< store1.getId() << endl;
    cout << "Store 2's ID: "<< store2.getId() << endl;
    cout << "Store 3's ID: "<< store3.getId() << endl;
    cout << "Next ID: " << Store::nextId << endl;   // Accessible only because it is public.

    return 0;    
}