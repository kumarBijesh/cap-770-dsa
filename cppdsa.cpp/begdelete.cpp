#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head = nullptr;
void create(int item)
{
    Node*newNode=new Node();
   if(newNode==nullptr)
   {
    cout<<"Memory allocation Failed\n";
    return ;
   } 
   newNode->data=item;
   newNode->next=head;
   head=newNode;
   cout<<"Node inserted with data: "<<item<<endl;
}
void begdelete()
{
    if(head==nullptr)
    {
        cout<<"List is empty.\n";
        return ;
    }
    Node* temp =head;
    head =head->next;
    delete temp;
    cout<<"Node deleted from the beginning.\n";
}
int main()
{
    int choice, item;
    do
    {
        cout<<"\n1. Append List\n2. Delete node\n3. Exit\n4. Enter your choice :";
        cin>>choice;
        switch (choice)\
        {
            case 1:
            cout<<"\nEnter the item: ";
            cin>>item;
            create (item);
            break;
            case 2:
            begdelete();
            break;
            case 3:
            cout<<"Exiting.\n";
            break;
            default :
            cout<<"Please enter a valid choice.\n";
        }
    }while(choice !=3);
    return 0;
}