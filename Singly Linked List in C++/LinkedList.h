// Name: Serene Plummer | UNT ID: 11762428
// Course: CSCE 2110
// Lab 3 - Singly Linked List with Additional Member Functions

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>


// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();                     // Constructor
    ~LinkedList();                    // Destructor

    void insertAtEnd(int value);
    void insertAtBeginning(int value);
    void insertAtPosition(int value, int position); //lab 3 additional member function
    void deleteNode(int value);
    void display();
    bool search(int value) const;
    int length(); 
    void reverse(); 
};

#endif
