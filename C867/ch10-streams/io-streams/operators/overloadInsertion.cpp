#include <iostream>
using namespace std;

class VoteCounter {
    private:
        int countA, countB, countC;

    public: 
        VoteCounter() { countA = countB = countC = 0; }
        VoteCounter& operator<<(const string& candidateName);
        string GetResults();
};

// Overloading the insertion operator
VoteCounter& VoteCounter::VoteCounter::operator<<(const string& candidateName) {
    if ("Candidate A" == candidateName) {
        ++countA;
    } else if ("Candidate B" == candidateName) {
        ++countB;
    } else if ("Candidate C" == candidateName) {
        ++countC;
    }

    return *this;
}

string VoteCounter::GetResults() {
    if (countA > countB) {
        if (countA > countC) {
            return "Candidate A wins!";
        } else if (countC > countA) {
            return "Candidate C wins!";
        } else {
            return "Tie between candidates A and C!";
        }
    } else if (countB > countA) {
        if (countB > countC) {
            return "Candidate B wins!";
        } else if (countC > countB) {
            return "Candidate C wins!";
        } else {
            return "Tie between candidates B and C!";
        }
    } else {  // If countA == countB and countC == countB, tie all, else tie A & B
        if (countB == countC) {
            return "Tie between all 3 candidates!";
        } else {
            return "Tie between candidates A and B!";
        }
    }
}


int main() {
    const string names[] = {"Candidate A", "Candidate B", "Candidate C"};
    const int voteIndexes[] = {2, 1, 2, 0, 2, 1, 2, 0, 0, 0, 1, 2, 0, 1, 0};
    const int voteCount = sizeof(voteIndexes) / sizeof(int);
    int i;

    // Cast votes
    cout << "Counting up the votes...\n";
    VoteCounter ctr;

    for (i = 0; i < voteCount; i++) {
        ctr << names[voteIndexes[i]];
    }

    // Get winner
    cout << ctr.GetResults() << '\n';

    return 0;
}