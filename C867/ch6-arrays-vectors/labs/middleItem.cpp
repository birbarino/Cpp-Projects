#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* Given a sorted list of integers, output the middle integer. A negative number indicates the end of the 
    input (the negative number is not a part of the sorted list). Assume the number of integers is always odd.*/
    vector<int> nums;
    int input;

    cin >> input;
    while (input > 0) {
        nums.resize(nums.size() + 1);
        nums.at(nums.size() - 1) = input;        
        cin >> input;
    }

    if (nums.size() > 9) {
        cout << "Too many numbers\n";
    } else {
        // Print middle value
        cout << "Middle item: " << nums.at(nums.size() / 2) << '\n';
    }

    return 0;
}
