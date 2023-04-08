#include <iostream>
using namespace std;

int main() {
    // type name[Rows][Cols];
    int arr1[2][3];    // Create 2x3 array of integers
    arr1[0][0] = 3;
    arr1[0][1] = 6;
    arr1[0][2] = 9;
    arr1[1][0] = 12;
    arr1[1][1] = 15;
    arr1[1][2] = 18;

    // Conceptually, a 2D array is like a table, but the compiler maps it to 1D memory.
    // To map to 1D memory, each row is stored one after the other (row-major order).

    // Initializing in the declaration looks as one would expect.
    int arr2[3][3] = {
        {3, 6, 9},    // Row 0
        {12, 15, 18}, // Row 1
        {21, 24, 27}  // Row 2
    };

    int arr3[3][3] = { {3, 6, 9}, {12, 15, 18}, {21, 24, 27} }; // A bit harder to read, but the same

    // 3D/4D arrays are also a thing...
    int arr4[3][3][3];  // Cube of arrays - 27 elements
    int arr5[3][3][3][3];   // 81 elements


    // Use a nested loop to iterate over multidimensional arrays. Example: finding the max and min values in an array.
    int min = arr1[0][0];   // Assign to first element, assigning to 0 will only change the value if a negative value is presented
    int max = arr1[0][0];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (arr1[i][j] < min) {
                min = arr1[i][j];
            }

            if (arr1[i][j] > max) {
                max = arr1[i][j];
            }
        }
    }

    cout << "Min: " << min << "\n";
    cout << "Max: " << max << "\n";
    
    return 0;
}