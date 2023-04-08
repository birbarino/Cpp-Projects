#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	string number;

    // Given first name, last name, and a 4 digit in, output the first five letters of the last name + first initial + last two digits of the number

    cin >> first;
    cin >> last;
    cin >> number;

    login = last.substr(0, 5) + first.at(0) + number.substr(number.length()-2, number.length()-1);

    cout << "Your login name: " << login << "\n";
	
	return 0;
}