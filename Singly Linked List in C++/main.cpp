// Name: Serene Plummer | UNT ID: 11762428
// Course: CSCE 2110

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    LinkedList list;

    // --- Build initial list: 5 -> 10 -> 20 -> 30 ---
    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);
    list.insertAtBeginning(5); // Insert values

    // Display
    cout << "Initial list: ";
    list.display();
    cout << "Length: " << list.length() << endl; // Display length

    // insert 25 at position 3 (after 20)
    cout << "Insert 25 at position 3" << endl;
    list.insertAtPosition(25, 3);
    list.display();
    cout << "Length: " << list.length() << endl;

    // Search
    int target1 = 25, target2 = 22;
    cout << "Search " << target1 << ": "
         << (list.search(target1) ? "Found" : "Not Found") << endl;
    cout << "Search " << target2 << ": "
         << (list.search(target2) ? "Found" : "Not Found") << endl;


    //Reverse the list
    cout << "Reverse the list" << endl;
    list.reverse();
    list.display();
    cout << "Length: " << list.length() << endl;

    return 0;

}
