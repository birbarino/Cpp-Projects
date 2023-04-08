#include <iostream>
#include <string>
using namespace std;

int main() {
    // int and double are the most commonly used.
    int i = 943024;     // 32-bit integer, standard defined min size (SDMS) of 16 bits
    double d = 5.33;    // 64-bit floating point. -1.7*10^308 to 1.7*10^308

    // chars are single characters surrounded by single quotes.
    char c = 'c';     // This is stored as an encoded value to represent a character. 8 bits in size, SDMS 8 bits

    // there are also short, long, and long long types.
    short s = 32767;    // -32,768 to 32,767, 16-bit size, SDS 16 bits
    long l = -2147483648;     // 32 bits SDMS and max size (-2,147,483,648 to 2,147,483,647) - same as int
    long long doubleL = 2835908325904;    // 64-bit integer, SDMS 64 bits (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)

    // floats are a smaller floating point number than doubles (half, in fact ;) )
    float f = 2.33233489248239048329083;    // typically only used to save memory. 32-bit size, -3.4*10^38 to 3.4*10^38
    cout << f;

    // Shorts are rarely used, except for embedded computing systems with little memory and tiny processors. Can also be efficient for arrays to decrease their size in memory.
    // For floats/doubles, the compiler uses one bit for sign (+/-), some bits for the mantissa (6.02 in 6.02e23), and can only do about 7 sig-digs (float)/16 sig-digs (double)

    return 0;
}
