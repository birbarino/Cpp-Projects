#include <iostream>
using namespace std;

// Function Declaration - allows definition to show up later in the program.
int cube(int num);

int main() {
    int num = 13;
    cout << cube(num) << '\n';
    cout << cube(num) << '\n';

    return 0;
}

// Function Definition - procedure of the function
int cube(int num = 3) {
    return num * num * num;
}

