// #include <iostream>

// // Creating a node
// struct node {
//   int value;
//   node* next;
// };

// // print the linked list value
// void printLinkedlist(node* p) {
//   while (p != nullptr) {
//     std::cout << p->value << " ";
//     p = p->next;
//   }
// }

// int main() {
//   // Initialize nodes
//   node* head = nullptr;
//   node* one = new node;
//   node* two = new node;
//   node* three = new node;

//   // Assign values
//   one->value = 1;
//   two->value = 2;
//   three->value = 3;

//   // Connect nodes
//   one->next = two;
//   two->next = three;
//   three->next = nullptr;

//   // Set head and print
//   head = one;
//   printLinkedlist(head);

//   // Remember to deallocate memory after use (C++ specific)
//   delete one;
//   delete two;
//   delete three;

//   return 0;
// }




#include <iostream>
using namespace std;

struct Node {
  int value;
  Node* next = nullptr;
};

void printList(Node* head) {
  while (head) {
    cout << head->value << " ";
    head = head->next;
  }
}

int main() {
  Node one{1}, two{2}, three{3};
  one.next = &two;
  two.next = &three;

  printList(&one);

  return 0;
}
