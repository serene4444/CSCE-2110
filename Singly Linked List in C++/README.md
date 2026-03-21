# Singly Linked List in C++

- Name: Serene Plummer
- Course: CSCE 2110
- Assignment: Lab 3

## Files Included
- `LinkedList.h`
- `LinkedList.cpp`
- `main.cpp`

## Project Description
This project implements a singly linked list in C++ using dynamic memory allocation and pointer manipulation.

## Implemented Operations
- Insert at beginning: `insertAtBeginning(int value)`
- Insert at end: `insertAtEnd(int value)`
- Insert at position: `insertAtPosition(int value, int position)`
- Delete by value: `deleteNode(int value)`
- Search by value: `search(int value)`
- Display list: `display()`
- Get list length: `length()`
- Reverse list: `reverse()`

## What `main.cpp` Demonstrates
- Builds an initial list
- Prints the list and its length
- Inserts a value at a specific position
- Searches for present and missing values
- Reverses the list and prints updated results

## How to Compile and Run
From the project folder, compile with:

```bash
g++ main.cpp LinkedList.cpp -o linkedlist
```

Run the program:

```bash
./linkedlist
```
