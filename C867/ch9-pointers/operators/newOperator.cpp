#include <iostream>
using namespace std;

class Point {
    public:
        Point();
        Point(double x, double y);

    private:
        double x, y;
};

Point::Point() {
    cout << "Executing default constructor.\n";
    x = 0;
    y = 0;
}

Point::Point(double x, double y) {
    cout << "Executing a constructor accessed by providing arguments.\n";
    this->x = x;
    this->y = y;
}

// The new operator allocates memory before calling constructor for the given type and returns a pointer
int main() {
    // Pointer is returned, therefore a pointer for Point types must be declared
    Point* example1 = new Point; // Makes call to default constructor
    cout << "Memory location of an object: " << example1 << "\n\n";

    // You can also use "new" to pass some arguments
    Point* example2 = new Point(1.2, 3.4);
    cout << "Memory location of a second object: " << example2 << "\n\n";

    // Another way to acheive a similar end but without the "new" operator
    Point example3;
    cout << "Memory location of a third object: " << &example3 << '\n';

    return 0;
}