#include <iostream>
#include <string>
using namespace std;

// Static member functions are independent of class objs. They are typically used to access/mutate
// private static data members from outside of the class (i.e. in main()). They can only access 
// static DM since "this" is not passed ("this" refers to a specific class)

class Store {
    public:
        Store(string storeName, string storeType);
        int getId();
        static int getNextId();
    private:
        string name = "None";
        string type = "None";
        int id = 0;
        static int nextId;
};

Store::Store(string storeName, string storeType) {
    name = storeName;
    type = storeType;
    id = nextId;
        
    ++nextId;
}

int Store::getId() {
    return id;
}

int Store::getNextId() {
    return nextId;
}

int Store::nextId = 101;

int main() {
    Store store1("Macy's", "Department");
    Store store2("Albertsons", "Grocery");
    Store store3("Ace", "Hardware");

    cout << "Store 1's ID: "<< store1.getId() << endl;
    cout << "Store 2's ID: "<< store2.getId() << endl;
    cout << "Store 3's ID: "<< store3.getId() << endl;
    cout << "Next ID: " << Store::getNextId() << endl;

    return 0;    
}