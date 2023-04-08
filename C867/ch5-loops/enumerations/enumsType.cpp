#include <iostream>
using namespace std;

/*  
Enumerators can be used to store a small set of named values
    - For example, a traffic light only has so many states - Red, Yellow, Green.
    - enums declare new data type and all possible values for it. 
*/


int main() {
    // enum values are integer constants automatically assigned an integer value (0, 1, ...)
    enum LightState {LS_RED, LS_GREEN, LS_YELLOW, LS_DONE}; // LS_DONE is a state so as to provide a way to escape the loop.

    // enum LightState {LS_RED = 2, LS_GREEN = 3232, LS_YELLOW = 12, LS_DONE = 7};  // Values can also be assigned for enumerators.

    LightState light;
    char cmd;

    cout << "Welcome to the street light controller.\n";
    cout << "User commands: n (next), r (red), q (quit).\n\n";

    light = LS_RED;
    while (light != LS_DONE) {
        if (light == LS_RED) {
            cout << "Red light  ";
            cin >> cmd;

            if (cmd == 'n') { // Next
                light = LS_GREEN;
            }

        } else if (light == LS_YELLOW) {
            cout << "Yellow light  ";
            cin >> cmd;

            if (cmd == 'n') { // Next
                light = LS_RED;
            }

        } else if (light == LS_GREEN) {
            cout << "Green light  ";
            cin >> cmd;

            if (cmd == 'n') { // Next
                light = LS_YELLOW;
            }

        }

        if (cmd == 'r') { // Force red light
            light = LS_RED;
        } else if (cmd == 'q') { // Quit
            light = LS_DONE;
            cout << "Control session quit.\n";
        }
    }

    return 0;
}