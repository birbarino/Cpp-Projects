#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec) {
    // Selection sort - in place sort
    unsigned int i, j, maxIndex;
    int temp;
    
    // For each element
    for (i = 0; i < myVec.size(); ++i) {
        // find highest value
        maxIndex = i;
        for (j = i + 1; j < myVec.size(); ++j) {
            if (myVec.at(j) > myVec.at(maxIndex)) {
                maxIndex = j;
            }
            
        }

        // Put max value for this iteration into element[i]
        if (maxIndex != i) {
            temp = myVec.at(maxIndex);
            myVec.at(maxIndex) = myVec.at(i);
            myVec.at(i) = temp;
        }
    }
}

int main() {
    vector<int> vec;
    int vecSize, value, i;

    cin >> vecSize;

    // Read input into vector
    for (i = 0; i < vecSize; ++i) {
        cin >> value;
        vec.push_back(value);
    }

    SortVector(vec);

    // Print sorted vector
    for (i = 0; i < vecSize; ++i) {
        cout << vec.at(i) << ',';
    }

    cout << '\n';

    return 0;
}
