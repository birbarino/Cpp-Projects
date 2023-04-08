#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    // Normalizing the data to be between 0 and 1 is a common technique to throw outlier away.
    // Adjust the values by dividing all values by the largest value. The input begins with an integer indicating the number of floating-point values that follow. 
    vector<float> nums, normalized;
    int numElements, i;
    float max = 0, input;

    // Stage vector to receive input
    cin >> numElements;

    // Store input
    for (i = 0; i < numElements; ++i) {
        cin >> input;
        nums.push_back(input);
    }

    // Determine max - broken out of first loop for "portability"
    for (i = 0; i < numElements; ++i) { // is it a good practice to use vector.size() instead if the size is already known/stored (such as with numElements)?
        if (nums.at(i) > max) {
            max = nums.at(i);
        }
    }

    // Stage variables and normalize
    for (i = 0; i < numElements; ++i) {
        normalized.push_back(nums.at(i) / max);
        cout << fixed << setprecision(2) << normalized.at(i) << ' ';
    }

    cout << '\n';

    return 0;
}
