#include "ItemNode.h"

int main() {
    ItemNode *headNode;  // Create intNode objects                                                   
    ItemNode *currNode;
    ItemNode *lastNode;

    string item;
    int i;
    int input;

    // Front of nodes list                                                                         
    headNode = new ItemNode();
    lastNode = headNode;

    cout << "How many items are you planning on shopping for? ";
    cin >> input;

    cout << "What is the first item? ";
    for (i = 0; i < input; i++) {
        if (i > 0) {
            cout << "What is the next item? ";
        }

        cin >> item;
        currNode = new ItemNode(item);
        lastNode->InsertAtEnd(currNode);
        lastNode = currNode;
    }

    cout << "\nHere is your list:\n";
    // Print linked list                                                                           
    currNode = headNode->GetNext();
    while (currNode != NULL) {
        currNode->PrintNodeData();
        currNode = currNode->GetNext();
    }
}