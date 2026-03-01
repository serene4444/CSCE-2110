#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();                     // Constructor
    ~LinkedList();                    // Destructor

    void insertAtEnd(int value);
    void insertAtBeginning(int value);
    void deleteValue(int value);
    void display() const;
    bool search(int value) const;
};

#endif