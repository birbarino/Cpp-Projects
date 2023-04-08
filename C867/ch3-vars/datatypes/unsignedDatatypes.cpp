#include <iostream>
using namespace std;

int main() {
    // When you know a var will always be positive, make it unsigned
    unsigned char c = 'a';    // 0 to 255
    unsigned short bytesPerKB = 1024;     // 0 to 65,535
    unsigned int bytesPerMB = bytesPerKB * 1024;    // 0 to 4,294,967,295
    unsigned long bytesPerGB = bytesPerMB * 1024;     // 0 to 4,294,967,295
    unsigned long long bytesPerTB = (long long)bytesPerGB * 1024;    // 0 to 18,446,744,073,709,551,615

    cout << c << "\n";
    cout << bytesPerTB << "\n";
    cout << bytesPerGB << "\n";
    cout << bytesPerMB << "\n";
    cout << bytesPerKB << "\n";

    return 0;
}
