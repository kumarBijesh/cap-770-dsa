#include <iostream>

using namespace std; // Not recommended for larger projects

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr; // Initialize head to nullptr

void create(int item) {
    Node* newNode = new Node(); // Use new for memory allocation

    if (newNode == nullptr) { // Handle allocation failure
        cerr << "Memory allocation failed!\n";
        return;
    }

    newNode->data = item;
    newNode->next = head;
    head = newNode;

    cout << "Node inserted with data: " << item << endl;
}

void end_delete() {
    if (head == nullptr) { // Handle empty list
        cout << "List is empty.\n";
        return;
    }

    if (head->next == nullptr) { // Single node case
        delete head;
        head = nullptr;
        cout << "Only node of the list deleted.\n";
        return;
    }

    Node* ptr = head;
    while (ptr->next->next != nullptr) { // Find second-last node
        ptr = ptr->next;
    }

    delete ptr->next; // Delete last node
    ptr->next = nullptr;

    cout << "Node deleted from the last.\n";
}

int main() {
    int choice, item;

    do {
        cout << "\n1. Append List\n2. Delete node\n3. Exit\n4. Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter the item: ";
                cin >> item;
                create(item);
                break;
            case 2:
                end_delete();
                break;
            case 3:
                cout << "Exiting.\n";
                break;
            default:
                cout << "Please enter a valid choice.\n";
        }
    } while (choice != 3);

    return 0;
}
