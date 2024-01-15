//inserting values in node from starting and displaying the linkedlist

#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

int main()
{
    int n=1;
    node *head=NULL;
    node *temp=NULL;
    while(n!=0){
    if(head==NULL)
    {
        head=new node();
        cout<<"enter the value of data";
        cin>>head->data;
        
    }else{
        temp=new node();
        cout<<"enter the value of data";
        cin>>temp->data;
       temp->next=NULL;
        temp->next=head;
        head=temp;
    }
    cout<<"enter 1 to add node and 0 to stop";
    cin>>n;
    
    
    }
    
    
   temp=head;
    
    cout<<"printing node values";
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
        
    
    }

    return 0;
}