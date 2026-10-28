#include <iostream>
using namespace std;

struct ListNode {
    double value;
    ListNode* next;
};

// ---------- INSERT into a SORTED list ----------
void insertNode(ListNode*& head, double num) {

    // STEP 1: Create the new node and store data in it
    ListNode* newNode = new ListNode;
    newNode->value = num;

    // STEP 2: If list is empty, new node becomes the head
    if (head == nullptr) {
        head = newNode;
        newNode->next = nullptr;
        return;                       // done!
    }

    // STEP 3: Walk the line with two pointers
    ListNode* previousNode = nullptr; // helper stays one step behind
    ListNode* nodePtr = head;         // checker walks forward

    // Stop at: end of list OR first node with value >= num
    while (nodePtr != nullptr && nodePtr->value < num) {
        previousNode = nodePtr;       // helper catches up to checker
        nodePtr = nodePtr->next;      // checker moves forward
    }

    // STEP 4: Link the new node in
    if (previousNode == nullptr) {
        // Case: inserting at the FRONT (new value is smallest)
        head = newNode;
        newNode->next = nodePtr;
    } else {
        // Case: inserting in MIDDLE or at END
        previousNode->next = newNode;
        newNode->next = nodePtr;
    }
}