#include <iostream>
#include <string>
using namespace std;

// Operator overloading allows you to redefine how operators function for objects (+, -, /, <, >, ++, -=, etc.)
class TimeHrMn {
public:
    TimeHrMn(int timeHours = 0, int timeMinutes = 0);
    void Print() const;

    TimeHrMn operator+(TimeHrMn rhs);
    void operator+(int rhsHours);   // Operators can be overloaded many times

    TimeHrMn operator-(TimeHrMn rhs);

private:
    int hours;
    int minutes;
};

// Overload + operator for TimeHrMn
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {     // rhs == right hand side of the operation, which is an object of the same time in this case
    // Other side of the operation not required as it is implicitly included -- it looks more like "x.operator+(y)" for "x + y"
    TimeHrMn timeTotal;

    timeTotal.hours = hours + rhs.hours;
    timeTotal.minutes = minutes + rhs.minutes;
    
    return timeTotal;
}

void TimeHrMn::operator+(int rhsHours) {
    this->hours += rhsHours;
}

TimeHrMn TimeHrMn::operator-(TimeHrMn rhs) {
    TimeHrMn timeTotal;

    timeTotal.hours = hours - rhs.hours;
    timeTotal.minutes= minutes - rhs.minutes;

    return timeTotal;
}

TimeHrMn::TimeHrMn(int timeHours, int timeMinutes) {
    hours  = timeHours;
    minutes = timeMinutes;
}

void TimeHrMn::Print() const {
    cout << "H:" << hours << ", " << "M:" << minutes << endl;
}

int main() {
    TimeHrMn time1(5, 30);
    TimeHrMn time2(10, 14);
    TimeHrMn timeTotal;
    
    timeTotal = time1 + time2;
    timeTotal.Print(); 

    timeTotal + 2;  // Should this object be mutated or should a new one be made/returned?
    timeTotal.Print();
    
    return 0;
}