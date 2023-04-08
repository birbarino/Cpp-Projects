#include <iostream>
using namespace std;

int main () {
     int hourlyWage;
     
     hourlyWage = 20;

     cout << "Annual salary is: " << hourlyWage * 40 * 50 << "\n";
     cout << "Monthly salary is: " << ((hourlyWage * 40 * 50) / 12) << "\n";

     return 0;
}