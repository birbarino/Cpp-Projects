#include <iostream>
#include <cmath>
#include <cstdlib> // has int functions, like abs()
using namespace std;

int main() {
    // Quadratic formula is x = (-b +/- sqrt(b^2 - 4ac)) / 2a
    double a;
    double b;
    double c;
    double posX;
    double negX;
    
    cout << "Enter a, b, and c for an equation in quadratic format (ax^2 + bx + c = 0) to solve for x:\n";

    // Populate variables, for testing one can use 1, -4, -21 to get -3 and 7 for x.    
    cout << "What is a? ";
    cin >> a;
    
    cout << "What is b? ";
    cin >> b;

    cout << "What is c? ";
    cin >> c;

    // sqrt(x) and pow(x, y)
    posX = (-b + sqrt((pow(b, 2.0)) - (4*a*c))) / 2*a;
    negX = (-b - sqrt((pow(b, 2.0)) - (4*a*c))) / 2*a;
    cout << "\nx = " << negX << ", " << posX;
    
    // Absolute Value
    cout << "\n\nThe absolute value of -2.89 is " << fabs(-2.89) << "\n";     // Get absolute value for float
    cout << "The absolute value of 9 is " << abs(9) << "\n";    // Get absolute value for int

    return 0;
}
