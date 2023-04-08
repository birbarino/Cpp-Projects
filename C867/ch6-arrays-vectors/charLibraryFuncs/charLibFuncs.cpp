#include <iostream>
#include <cctype>   // Required for the functions below
using namespace std;

int main() {

    // Non-zero means true, zero means false

    cout << isalpha('c') << '\n';
    
    cout << isdigit('1') << '\n';
    
    cout << isalnum('B') << '\n';   // alphabetic or numeric

    cout << isspace(' ') << '\n';   // any whitespace (tabs, newlines, spaces, etc.)

    cout << islower('N') << '\n';

    cout << isupper('N') << '\n';

    cout << isblank('\t') << '\n';  // Spaces, tabs, etc.

    cout << isxdigit('f') << '\n';  // 0-9, A-F, a-f

    cout << ispunct('@') << '\n';   // !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~

    cout << isprint('\0') << '\n';  // Is printable char?

    cout << iscntrl('\n') << '\n';  // Is control char? Newlines, null, form feed, tab, line feed, carriage return, etc.

    return 0;
}