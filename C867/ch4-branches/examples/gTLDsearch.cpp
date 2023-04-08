#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string inputName;
    string searchName;
    string coreGtld1, coreGtld2,  coreGtld3, coreGtld4;
    bool isCoreGtld = false;

    coreGtld1 = ".com";
    coreGtld2 = ".net";
    coreGtld3 = ".org";
    coreGtld4 = ".info";


    cout << endl << "Enter a top-level domain name: " << endl;
    cin >> inputName;

    // Add a dot if not present to allow excluding it from input
    if ((inputName.length() > 0) && (inputName.at(0) != '.')) {
        searchName = "." + inputName;
    } else { 
        searchName = inputName;
    }

    // Determine whether the user-entered name is a gTLD
    if (searchName == coreGtld1) {
        isCoreGtld = true;
    } else if (searchName == coreGtld2) {
        isCoreGtld = true;
    } else if (searchName == coreGtld3) {
        isCoreGtld = true;
    } else if (searchName == coreGtld4){
        isCoreGtld = true;
    }

    cout << "The name \"" << inputName << "\" ";
    if (isCoreGtld) {
        cout << "is a core gTLD." << endl;
    }
    else {
        cout << "is not a core gTLD." << endl;
    }

    return 0;
}