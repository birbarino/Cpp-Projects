#include <iostream>
using namespace std;

int main() {
    int start, end;
    
    cout << "Provide two ints and this program will count by 5's up to it, e.g. \"-10 0\" prints \"-10 -5 0\"\n";
    cin >> start;
    cin >> end;

    if (start <= end) {
        while (start <= end) {
            cout << start << " ";
            start += 5;
        }
    } else {
        cout << "Second integer can't be less than the first.";
    }

    cout << "\n";

    return 0;
}
