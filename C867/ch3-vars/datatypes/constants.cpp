#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Like with any other language, constants cannot be changed
    const double SPEED_OF_SOUND = 761.207;    // Mile/hour at sea level
    const double SECONDS_PER_HOUR = 3600.0;
    double secondsBetween;
    double timeInHours;
    double distInMiles;

    cout << "How many seconds were there between the thunder and the lightning? ";
    cin >> secondsBetween;

    timeInHours = secondsBetween / SECONDS_PER_HOUR;
    distInMiles = SPEED_OF_SOUND * timeInHours;

    cout << "Lightning strike was approximately " << fixed << setprecision(4) << distInMiles << " miles away.\n";

    return 0;
}
