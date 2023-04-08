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

// Another constructor, called by giving args
Restaurant::Restaurant(string initName, int initRating) {
    name = initName;
    rating = initRating;
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


