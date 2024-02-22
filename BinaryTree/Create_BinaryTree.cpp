#include <iostream>
using namespace std;
class node{
    
    public:
    int data;
    node *left,*right;
    
    node(int val)
    {
      data=val;
      left=right=NULL;
    }
};

node* BinaryTree()
{
    int x;
    cin>>x;
    
    if(x==-1)
    {
        return NULL;
    }
    
    node *temp=new node(x);
    
    //left
    cout<<"Enter the left child of :"<<x<<endl;
    temp->left=BinaryTree();
    //right
    cout<<"Enter the right child of :"<<x<<endl;
    temp->right=BinaryTree();
    return temp;
}
int main()
{
    node *root;
    cout<<"enter the value of root node"<<endl;
    root=BinaryTree();

    return 0;
}