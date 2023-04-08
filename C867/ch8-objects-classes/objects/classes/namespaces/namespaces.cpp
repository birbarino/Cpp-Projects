#include "airplane.h"
#include "stadium.h"
using namespace std;    // This is a Namespace directive, which directs the compiler to check the 
                        // std namespace for undeclared names in a file, i.e. knowing "string var" 
                        // is "std::string var". This is dicouraged for the sake of clarity, though.

// Name conflicts occur when variables, classes, functions, etc. have the same name.
// These can be avoided by using the scope resolution operator (::)
int main() {
    airplane::Seat flightSeat('C', 18, true);
    stadium::Seat bleacherSeat('E', 12, true);

    flightSeat.Print();

    bleacherSeat.Unreserve();
    bleacherSeat.Print();
    
    return 0;
}