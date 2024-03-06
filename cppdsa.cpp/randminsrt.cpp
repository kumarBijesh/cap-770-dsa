#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head= nullptr;
void randominsert(int item);
void create(int item);
int main()
{
    int choice ,item, loc;
    do
    {
        cout<<"\nEnter the item which you want to insert\n";
        cin>>item;
 if(head==nullptr)
    {
        create(item);
    }
    else
    {
        randominsert(item);

    }
    cout<<"\nPress 0 to insert more\n";
    cin>>choice;
    }while(choice==0);
    return 0;
}
void create(int item)
{
    Node* ptr=new Node();
    if(ptr == nullptr)
    {
        cout<<"\nOVERFLOW\n";
    }
    else
    {
        ptr->data =item;
        ptr->next=head;
        head=ptr;
        cout<<"\nNode inserted\n";
    }
}
void randominsert(int item)
{
    Node*ptr =new Node();
    Node*temp;
    int i, loc;
    if(ptr == nullptr)
    {
 cout<<"\nOvERFLOW\n";
    }
    else
    {
        cout<<"Enter the location";
        cin>>loc;
        ptr->data =item;
        temp=head;
        for(int i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp == nullptr)
            {
                cout<<"\ncan't iinsert\n";
                return ;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        cout<<"\nNode inserted";
    }
}