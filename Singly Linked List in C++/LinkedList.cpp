// Name: Serene Plummer | UNT ID: 11762428
// Course: CSCE 2110

#include "LinkedList.h"
#include <iostream>
using namespace std;

// Constructor
LinkedList::LinkedList() : head(nullptr) {}

// Destructor to free memory
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

// Insert a new node at beginning of the list
void LinkedList::insertAtBeginning(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Insert a new node at the end of the list
void LinkedList::insertAtEnd(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

// Insert a new node at a specific position (lab 3 additional member function)
// Position 0 = beginning, 1 = after first node, etc.
void LinkedList::insertAtPosition(int value, int position){
    if (position <= 0){
        insertAtBeginning(value);
        return;
    }

    Node* newNode = new Node(value);
    Node* current = head;

    for (int i = 0; i < position -1 && current != nullptr; i++){
        current = current->next;
    }
    // If position is greater than list length, insert at end
    if (current == nullptr){
        delete newNode; // Avoid memory leak
        insertAtEnd(value); 
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// Delete first occurrence of value
void LinkedList::deleteNode(int value) {
    if (head == nullptr){
        cout << "List is empty. Cannot delete value." << endl;
        return;
    }

    // If head needs deletion
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    // If value found
    if (current->next == nullptr) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}

//Search for a value in the list, return true if found, false otherwise
bool LinkedList::search(int value) const {
    Node* current = head;
    while (current != nullptr){
        if (current->data == value){
            return true;
        }
        current = current->next;
    }
    return false;
}


// Display list
void LinkedList::display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

// Search value in the list
int LinkedList::length() {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

// Reverse the linked list
void LinkedList::reverse() {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store next node
        current->next = prev; // Reverse current node's pointer
        prev = current; // Move prev to current
        current = next; // Move to next node
    }
    head = prev; // Update head to new first node
}
