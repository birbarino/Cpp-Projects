#include <iostream>
#include <cstring>  // Required for C string functions
using namespace std;

int main() {
    char exclamation[] = "Nice one!";
    char copy1[20];
    char copy2[20];

    /* Ways to "function-up" C strings */
    // strcpy(dst, src) -- copy strings incl. null char (dst = src does not work)
    strcpy(copy1, exclamation);  // UNSAFE
    cout << "strcpy(copy1, exclamation): " << copy1 << '\n';
    
    // strncpy(dst, src, numChars) -- copies up to numChars
    strncpy(copy2, exclamation, 4);
    cout << "strncpy(copy2, exclamation, 4): " << copy2 << '\n';

    // strcat(dst, src) -- copies up to src's null char and adds to end of dst's null char.
    strcat(copy1, exclamation);
    cout << "strcat(copy1, exclamation): " << copy1 << '\n';

    // strncat(dst, src, numChars) -- like strncpy and strcat had a baby. Appends null character.
    strncat(copy2, exclamation, 4);
    cout << "strncat(copy2, exclamation, 4): " << copy2 << '\n';

    // strchr(src, searchChar) -- returns NULL if searchChar not present, else returns address of first occurrence (NULL defined in cstring)
    char *address = strchr(exclamation, ' ');
    printf("strchr(exclamation, ' '): Address of ' ' is %p\n", (void *)address);

    // size_t strlen(src) -- returns number of chars in src up to (exclusive) the null char. size_t is type int
    int x = strlen(exclamation);
    cout << "strlen(exclamation): " << x << '\n';

    // int strcmp(str1, str2) -- string compare, non-zero if different
    int cmp = strcmp(exclamation, exclamation);
    cout << "strcmp(exclamation, exclamation): " << cmp << '\n';

    return 0;
}