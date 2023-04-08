#include <iostream>
#include <string>
using namespace std;

int main() {
     string firstName;
     string lastName;

     cout << "Enter first name:" << endl;
     getline(cin, firstName); // Gets entire line up to ENTER

     cout << "Enter last name:" << endl;
     getline(cin, lastName); // Gets entire line up to ENTER

     cout << endl;
     cout << "Welcome " << firstName << " " << lastName << "!" << endl;
     cout << "May I call you " << firstName << "?" << endl;

     return 0;
}
