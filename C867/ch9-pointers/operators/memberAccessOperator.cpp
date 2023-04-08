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

// When using an object's pointer, use -> to access the object's members (a->b instead of (*a).b)
int main() {
    Point* point1 = new Point();
    Point point2(1578.3, 2354.2);

    point1->Print();    // Using a pointer's member function
    point2.Print();     // Using a normal object's member function

    return 0;
}