#include <iostream>
#include <cstdlib>  // For memory allocation

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;  // Initialize front and rear to nullptr
Node* rear = nullptr;

void insert(int value) {
    Node* newNode = new Node;  // Use new operator for dynamic memory allocation
    newNode->data = value;
    newNode->next = nullptr;

    if (front == nullptr) {
        front = rear = newNode;  // Handle empty queue case
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "\nInsertion successful!" << endl;
}

void deleteNode() {
    if (front == nullptr) {
        cout << "\nQueue is empty!" << endl;
    } else {
        Node* temp = front;
        front = front->next;

        if (front == nullptr) {  // Handle last element deletion
            rear = nullptr;
        }

        cout << "\nDeleted element: " << temp->data << endl;
        delete temp;
    }
}

void display() {
    if (front == nullptr) {
        cout << "\nQueue is empty!" << endl;
    } else {
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n:: Queue Implementation using Linked List ::\n";
        cout << "\n****** MENU ******\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to be inserted: ";
                cin >> value;
                insert(value);
                break;
            case 2:
                deleteNode();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "\nWrong selection! Please try again." << endl;
        }
    }

    return 0;
}
