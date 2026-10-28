#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

// Node structure - one bogie
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Append - attach a new bogie at the end of the train
void append(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Traverse - inspect all bogies
void traverse(Node* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " -> ";
        temp = temp->next;
    }
    cout << " -> NULL" << endl;
}

#endif