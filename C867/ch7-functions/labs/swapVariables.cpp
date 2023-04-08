#include <iostream>
using namespace std;

void SwapValues(int& num1, int& num2, int& num3, int& num4) {
    // Swap 1 and 2
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Swap 3 and 4
    temp = num3;
    num3 = num4;
    num4 = temp;
}

int main() {
    int num1, num2, num3, num4;

    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;

    SwapValues(num1, num2, num3, num4);
    cout << num1 << ' ' << num2 << ' ' << num3 << ' ' << num4 << '\n';

    return 0;
}