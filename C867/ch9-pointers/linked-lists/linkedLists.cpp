#include <iostream>
#include <ctime>
using namespace std;

// A common use of pointers is to create a linked List. Allows fast insertion for large data sets
// Items remain unshifted in memory after insertions are made
class IntNode {
    public:
        IntNode(int value = 0, IntNode* nextNode = nullptr);
        void InsertAfter(IntNode* nodeLoc);
        IntNode* GetNext();
        void PrintNodeValue();

    private:
        int value;
        IntNode* nextNodePtr;

};

// Constructor
IntNode::IntNode(int value, IntNode* nextNode) {
    this->value = value;
    this->nextNodePtr = nextNode;
}

/* Insert a node after this node
 * Before: this -- node
 * After: this -- node -- next
 */
void IntNode::InsertAfter(IntNode* nodeLoc) {
    IntNode* tmpNext = nullptr;

    tmpNext = this->nextNodePtr;    // Remember next
    this->nextNodePtr = nodeLoc;    // this -- node -- ?
    nodeLoc->nextNodePtr = tmpNext; // this -- node -- next

}

IntNode* IntNode::GetNext() {
    return this->nextNodePtr;
}

void IntNode::PrintNodeValue() {
    cout << this->value << '\n';  
}


int main() {
    srand(time(NULL));  // Initialize random seed
    
    IntNode* head = new IntNode(-1);    // Exists solely to point to the first item.
    IntNode* node1 = new IntNode(12);
    IntNode* node2 = new IntNode(11);
    IntNode* node3 = new IntNode(10);
    IntNode* node4 = new IntNode(9);
    IntNode* chaos = new IntNode(rand() % 10 + 1);  // Random number 1-10
    IntNode* curr = nullptr;

    head->InsertAfter(node1);   // Insert node1 after the head node
    node1->InsertAfter(node2);
    node2->InsertAfter(node3);
    node3->InsertAfter(node4);
    
    // Test inserting in the middle of the list
    node2->InsertAfter(chaos);
    
    // Print each value 
    curr = head;
    while (curr != nullptr) {
        curr->PrintNodeValue();
        curr = curr->GetNext();
    }

    return 0;
}