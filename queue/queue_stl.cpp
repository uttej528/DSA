#include <iostream>
#include <queue> // Include the queue header file
using namespace std;

int main()
{
    queue<int> q; 
    
    q.push(5); 
    q.push(4); 
    q.push(3); 
    q.push(2); 
    q.push(1);
    cout<<"Before popping elements"<<endl;
       cout<<q.size()<<endl;
        cout<<q.front()<<endl;
      cout<<q.back()<<endl;
        cout<<q.empty()<<endl;
        
    q.pop();
    q.pop();
    q.pop();
      cout<<"After popping elements"<<endl;
       cout<<q.size()<<endl;
        cout<<q.front()<<endl;
      cout<<q.back()<<endl;
        cout<<q.empty()<<endl;
        
    return 0;
}
