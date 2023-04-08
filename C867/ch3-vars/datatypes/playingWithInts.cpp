#include <iostream>
using namespace std;

int main () {

    // Declaring a variable
    int userAge;

    cout << "How old are you? ";
    cin >> userAge;
    cout << "\nOh, you are " << userAge << " years? Nice.\n";

    int userAgeDays = userAge * 365;
    cout << "You are " << userAgeDays << " days old.\n";

    // Initializing with values
    int age = 12;
    cout << "My age is " << age << "\n";

    // Changing the value (declaring)
    age = 120;
    cout << "Oh, sorry. I actually meant I am " << age << " years old.\n"; 

    // Negative values
    age = -userAge;

    /* 
     * Compound Values
     * +=
     * -=
     * /=
     * *=
     * %= 
    */
     
    return 0;
}
