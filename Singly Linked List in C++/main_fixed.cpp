#include "LinkedList.h"

int main() {
    LinkedList list;

    // Insert values
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtBeginning(5);

    // Display
    list.display();

    // Search
    cout << "Search 20: "
         << (list.search(20) ? "Found" : "Not Found") << endl;

    // Delete
    cout << "Delete 10" << endl;
    list.deleteValue(10);

    // Display again
    list.display();

    return 0;
}
