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

void delete_specified(int loc) {
    if (head == nullptr) { // Handle empty list
        cout << "List is empty.\n";
        return;
    }

    // Handle deleting the head node
    if (loc == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted from the beginning.\n";
        return;
    }

    // Find the node before the one to be deleted
    Node* ptr = head;
    for (int i = 0; i < loc - 1 && ptr->next != nullptr; i++) {
        ptr = ptr->next;
    }

    // Check if the node to be deleted exists
    if (ptr->next == nullptr) {
        cout << "There are less than " << loc + 1 << " elements in the list.\n";
        return;
    }

    Node* temp = ptr->next;
    ptr->next = temp->next;
    delete temp;

    cout << "Node deleted at position " << loc << ".\n";
}

int main() {
    int choice, item, loc;

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
                cout << "Enter the position of the node to delete (0-indexed): ";
                cin >> loc;
                delete_specified(loc);
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
