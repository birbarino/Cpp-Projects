#include <iostream>
using namespace std;

int main() {
    int highwayNumber;

    cin >> highwayNumber;

    if (highwayNumber < 100  && highwayNumber > 0) {
        if (highwayNumber % 2 == 0) {
            cout << "I-" << highwayNumber << " is primary, going east/west.\n";
        } else {
            cout << "I-" << highwayNumber << " is primary, going north/south.\n";
        }

    } else if ((highwayNumber < 1000) && (highwayNumber % 100 != 0)) {
        if (highwayNumber % 2 == 0) {
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", going east/west.\n";
        } else {
            cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", going north/south.\n";
        }

    } else {
        cout << highwayNumber << " is not a valid interstate highway number.\n";
    }

    return 0;
}
