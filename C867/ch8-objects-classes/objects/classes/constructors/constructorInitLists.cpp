#include <iostream>
#include <string>
using namespace std;

class Restaurant {
    public:
        Restaurant(string initName = "NoName", int initRating = -1); // Default constructor - can be called with no args
        void Print();

     private:
          string name;
          int rating;
};

// Initializer list, instead of a few statements
Restaurant::Restaurant(string initName, int initRating) : name(initName), rating(initRating) {  // Assign values for name and rating.

}

void Restaurant::Print() {
    cout << name << " -- " << rating << "\n";
}

int main() {
    Restaurant foodPlace;                        // Calls default constructor
    Restaurant coffeePlace("Happy Teriyaki", 5); // Calls another constructor

    foodPlace.Print();
    coffeePlace.Print();

    return 0;
}