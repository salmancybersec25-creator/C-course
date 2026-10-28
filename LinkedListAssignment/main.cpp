#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    Node* head = nullptr;   // empty platform

    // Attach 4 bogies (you can use 3 or 4 — here we used 4)
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);

    // Do the inspection
    traverse(head);

    return 0;
}