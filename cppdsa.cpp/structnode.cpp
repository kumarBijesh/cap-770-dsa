#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    };
    Node* head =nullptr;
    void beginsert(int item)
    {
        Node *ptr=new Node();
        if (ptr==nullptr)
        {
            cout<<"\nOVERFLOW\n";
        }
        else
        {
            ptr->data=item;
            ptr->next=head;
            head=ptr;
            cout<<"\n Node inserted\n";
        }
    }
    int main()
    {
        int choice ,item;
        do{
            cout<<"\nEnter the item which you want to insert ?\n";
            cin>>item;
            beginsert(item);
            cout<<"\nPress 0 to insert more ?\n";
            cin>>choice;     
        }while (choice == 0);
        return 0;
    }