/*
    2.2 Programming Basics - Taking inputs and making outputs, 
    while sometimes doing some operations

    Author: Ethan
    Date: 20220822
*/
#include <iostream>

// So that each use of cout/cin isn't std::cout/std::cin
using namespace std;

// Programs starts in the main() method
int main() {
    int wage = 100;
    int num1;
    int num2;

    // Use "cout" for "characters output" to terminal/prompt
    cout << "When wage is " << wage << ", salary is $";
    cout << wage * 40 * 52;
    cout << endl;

    cout << "Please input your wage: ";

    
    // Notice how >> is used instead of <<
    cin >> wage;    // Use "cin" for getting "characters input" from terminal/prompt

    cout << "Salary is $" << wage * 40 * 52 << "\n";

    // Multiple inputs can be obtained very simply
    cout << "Please provide an int as input, press enter, then another int.\n";

    cin >> num1;
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";

    // Return 0 to indicate that execution occurred without error
    return 0;
}