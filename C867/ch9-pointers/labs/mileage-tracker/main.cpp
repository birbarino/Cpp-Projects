#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
    // References for MileageTrackerNode objects
    MileageTrackerNode* headNode;
    MileageTrackerNode* currNode;
    MileageTrackerNode* lastNode;

    double miles;
    string date;
    int i, numNodes = 0;

    // Front of nodes list
    headNode = new MileageTrackerNode();
    lastNode = headNode;

    // Read input and store into linked list
    cout << "How many entries do you want to store? ";
    cin >> numNodes;

    for (i = 0; i < numNodes; ++i) {
        cout << "Distance in miles: ";
        cin >> miles;

        cout << "Date (MM/DD/YY): ";
        cin >> date;

        currNode = new MileageTrackerNode(miles, date);
        lastNode->InsertAfter(currNode);

        lastNode = currNode;
    }

    // Print data for each element
    lastNode = headNode->GetNext();

    while (lastNode != nullptr) {
        lastNode->PrintNodeData();
        lastNode = lastNode->GetNext();
    }
    
    // MileageTrackerNode Destructor deletes all following nodes
    delete headNode;

    return 0;
}