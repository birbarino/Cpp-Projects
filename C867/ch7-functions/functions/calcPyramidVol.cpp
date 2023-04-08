#include <iostream>
using namespace std;

// Define functions with "type FuncName(type arg1, type arg2...)"
double CalcPyramidVolume(double baseLength, double baseWidth, double pyramidHeight) {
   return (baseLength * baseWidth) * pyramidHeight * (1.0/3.0);
}

int main() {
   double userLength;
   double userWidth;
   double userHeight;

   cin >> userLength;
   cin >> userWidth;
   cin >> userHeight;

   cout << "Volume: " << CalcPyramidVolume(userLength, userWidth, userHeight) << endl;

   return 0;
}