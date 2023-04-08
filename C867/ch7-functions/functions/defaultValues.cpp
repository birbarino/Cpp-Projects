#include <iostream>
using namespace std;

// Default value of 3 used when arg not provided
int cube(int num = 3) {
    return num * num * num;
}

int main() {
    int num = 13;
    cout << cube(num) << '\n';
    cout << cube() << '\n';

    return 0;
}

