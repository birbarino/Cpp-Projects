#include "InventoryNode.h"

int main() {
    int count;
    int numItems;
    string item;

    InventoryNode *headNode = new InventoryNode();
    InventoryNode *currNode;

    // Obtain number of items
    cout << "How many items are you inputting? ";
    cin >> count;

    cout << "What is the item and how many are there? Example: plates 20\n";
    // Get each item and number of each
    for (int i = 0; i < count; i++) {
        cin >> item;
        cin >> numItems;

        currNode = new InventoryNode(item, numItems);
        currNode->InsertAtFront(headNode, currNode);
    }

    cout << "Printing input...\n";

    // Print linked list
    currNode = headNode->GetNext();
    while (currNode != NULL) {
        currNode->PrintNodeData();
        currNode = currNode->GetNext();
    }

    return 0;
}