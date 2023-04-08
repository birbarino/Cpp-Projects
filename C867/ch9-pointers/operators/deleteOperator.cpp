#include <iostream>
using namespace std;   

class Point {
    public:
        Point();
        Point(double x, double y);
        void Print();

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

void Point::Print() {
    cout << x << ' ' << y << '\n';
}

// delete frees a block of memory that was allocated with the new operator
int main() {
    Point* point1 = new Point();
    Point point2(1578.3, 2354.2);

    point1->Print();
    point2.Print();

    delete point1;  // if point1 is null beforehand, no effect. Does not set point1 to null

    point1->Print(); // Don't dereference or call a member function on a pointer that has been deallocated

    return 0;
}