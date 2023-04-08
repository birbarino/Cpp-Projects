#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    Triangle triangle1, triangle2;
    double base, height;

    cout << "What are the dimensions of the first triangle? (ex. 1.2 2.3)\n";
    cin >> base;
    cin >> height;
    triangle1.SetBase(base);
    triangle1.SetHeight(height);

    cout << "What are the dimensions of the second triangle?\n";
    cin >> base;
    cin >> height;
    triangle2.SetBase(base);
    triangle2.SetHeight(height);
    
    cout << "\nTriangle with larger area:\n";

    if (triangle1.GetArea() > triangle2.GetArea()) {
        triangle1.PrintInfo();
    } else {
        triangle2.PrintInfo();
    }
    
    return 0;
}