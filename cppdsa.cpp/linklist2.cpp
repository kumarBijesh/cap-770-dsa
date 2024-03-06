#include<iostream>
using namespace std;
//creating node
struct Node{
    int value;
    Node* next;
};
void printLinkedList(Node* p)
{
    while (p!=nullptr){
        cout<<p->value<<" ";
        p=p->next;
    }
}
int main()
{
    Node* head=nullptr;
    Node* one=nullptr;
    Node* two=nullptr;
    Node* three=nullptr;
    //Allocate memory
    one=new Node();
    two =new Node();
    three= new Node();
    //Assign Value values
    one->value=1;
     two->value=2;
     three->value=3;
    //connect nodes
    one->next =two;
    two->next=three;
    three->next=nullptr;
    //printing node value
    head=one;
    printLinkedList(head);
    // clean up memory (deallocate)
    delete one;
    delete two;
    delete three;
    return 0;

}