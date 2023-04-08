#include <iostream>
#include <string>
#include <queue>
using namespace std;

// cout and cin can be extended in functionality using friend functions
class WaitingLine {
    public:
        WaitingLine& operator<<(const string& name) {
            line.push(name);
            cout << name << " joins at the back of the line\n";
            
            return *this;
        }

        WaitingLine& operator>>(string& frontName) {
            frontName = line.front();
            line.pop();

            return *this;
        }

        // Fill and return a buffer with the line as a string, invoked with cout or other ostreams
        friend ostream& operator<<(ostream& out, const WaitingLine& line) {            
            string item;
            queue<string> copy = line.line;

            out << "(front)";

            while (!copy.empty()) {
                item = copy.front();
                copy.pop();
                out << " " << item;
            }

            out << " (back)";
            return out;
        }

        // Extract input, store in line by calling the overloaded << operator
        friend istream& operator>>(istream& in, WaitingLine& line) {
            string inStr;

            in >> inStr;
            line << inStr;

            return in;
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

    cout << line1 << '\n';  // Output the current line

    cout << "Who else do you want to join? ";
    cin >> line1;  // Add entry based on input
    
    cout << line1;

    return 0;
}