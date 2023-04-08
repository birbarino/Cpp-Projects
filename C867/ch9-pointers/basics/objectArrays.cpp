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
    x = 0;
    y = 0;
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

void Point::Print() {
    cout << "(" << x << ", " << y  << ")" << "\n";
}


int main() {
    // Allocate number of points with new operator
    int pointCount = 3;
    Point* pts = new Point[pointCount]; // Cannot pass arguments

    for (int i = 0; i < pointCount; ++i) {
        pts[i].Print(); // Contiguous in memory
    }

    // Free all points with a single delete. Objects in an array cannot be deleted individually.
    delete[] pts;

    return 0;
}