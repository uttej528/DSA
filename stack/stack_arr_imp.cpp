#include <iostream>
using namespace std;

class stack{
  
  int *arr;
  int size;
  int top;
  
  public:
  stack(int s)
  {
      size=s;
      top=-1;
      arr=new int[s];
  }
  
  void push(int val){
      if(top==size-1)
      {
          cout<<"Stack overflow"<<endl;
      }else{
          top=top+1;
          arr[top]=val;
          cout<<"element pushed"<<endl;
      }
      
  }
  
  void pop()
  {
      if(top==-1)
      {
          cout<<"Stack underflow"<<endl;
      }else{
          cout<<"popping top element"<<top[arr]<<endl;
          top=top-1;
      }
  }
  
  
  void peek()
  {
      cout<<"peeek element is"<<top[arr]<<endl;
  }
  
  void issize()
  {
      cout<<"size of stack is"<<top+1<<endl;
  }
  
  void isempty()
  {
      if(top==-1)
      {
          cout<<"stack is empty"<<endl;
      }else{
          cout<<"stack is not empty"<<endl;
      }
      
  }
  
};

int main()
{
    
    stack obj1(5);
  obj1.push(2);
    obj1.push(2);
      obj1.push(2);
     obj1.peek();
        obj1.push(2);
          obj1.push(2);
            obj1.push(2);
            obj1.pop();
            obj1.pop();
            obj1.isempty();
            obj1.pop();
            obj1.issize();
            obj1.pop();
            obj1.pop();
            obj1.pop();

    return 0;
}