#include <iostream>
#include <string>
#include <queue>
using namespace std;

class WaitingLine {
    public:
        WaitingLine& operator<<(const string& name) {
            line.push(name);
            cout << name << " joins at the back of the line\n";
            
            return *this;
        }

        WaitingLine& operator>>(string& frontName) {
            // Copy name at front of line to frontName, then 
            frontName = line.front();
            line.pop();

            return *this;
        }

        int GetSize() { return line.size(); }


    private:
        queue<string> line;
};

int main() {
    WaitingLine line1;

    // Add names to the back of the line
    line1 << "Case";
    line1 << "Molly";
    line1 << "Armitage";

    string name;

    int maxSize = line1.GetSize();

    for (int i = 0; i < maxSize; i++) {
        line1 >> name;  // Extract name at the front;
        cout << name << " exits the front of the line.\n";
    }

    return 0;
}