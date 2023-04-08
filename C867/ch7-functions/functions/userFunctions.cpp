#include <iostream>
#include <string>
using namespace std;

// Print function
// "void" means it does return anything. Void functions can have any number of parameters
void PrintFeetInchShort(int numFeet, int numInches) {
    cout << numFeet << "' " << numInches << "\"\n";    
}

// Function stub
int DoSomething(int num1, int num2) {
    cout << "FIXME: Finish DoSomething()\n";
    return -1;
}

double divide(double num1, double num2) {
    if (num2 > 0.0) {
        return num1 / num2;
    } else {
        return 0.0;
    }
}

string MemeifyString(string input) {
    string meme = "";

    for (int i = 0; i < input.length(); ++i) {
        if (i % 2 == 0) {
            meme += toupper(input.at(i));
        } else {
            meme += tolower(input.at(i));
        }
    }
    
    return meme;
}

int main() {
    int userFeet;
    int userInches;
    string userInput;

    cout << "How many feet? ";
    cin >> userFeet;
    cout << "How many inches? ";
    cin >> userInches;
    
    PrintFeetInchShort(userFeet, userInches); 

    // Call function stub
    DoSomething(1, 2);

    // Call function with logic control
    cout << divide(123.456, 654.321) << "\n";

    // Call function with loops   
    cout << MemeifyString("Wow, what a big number!");

    return 0;
}