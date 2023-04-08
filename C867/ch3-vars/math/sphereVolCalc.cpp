#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double sphereVolume;
    double sphereRadius;

    cout << "What\'s the volume of your sphere? ";
    cin >> sphereRadius;

    // Volume of sphere = (4.0 / 3.0) * π(r^3)
    sphereVolume = (4.0 / 3.0) * (M_PI * (sphereRadius * sphereRadius * sphereRadius)); 

    cout << "\nThat sphere's volume is " << fixed << setprecision(2) << sphereVolume << " units cubed.";     
    
    return 0;
}
