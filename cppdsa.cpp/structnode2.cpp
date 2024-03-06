#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;

};
Node* head=nullptr;
void lastinsert(int item)
{
    Node* ptr =new Node();
    Node* temp;
    if(ptr == nullptr)
    {
        cout<<"\nOVERFLOW";

    }
    else
    {
        ptr->data=item;
        if(head==nullptr)
        {
            ptr->next=nullptr;
            head=ptr;
            cout<<"\nNode inserted";
        }
    else
    {
        temp=head;
        while(temp->next != nullptr)
        {
            temp=temp->next;

        }
        temp->next=ptr;
        ptr->next=nullptr;
        cout<<"\n Node inserted";
    }
}
 }
 int main()
 {
    int choice ,item;
    do{
        cout<<"\nEnter the item which you want to insert?\n";
        cin>>item;
        lastinsert(item);
        cout<<"\nPress 0 to insert more?\n";
        cin>>choice ;
      }while (choice==0);
      return 0;
 }