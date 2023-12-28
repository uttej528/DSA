//Write a program to find the sum of first N natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int num;int i,sum=0;
    cout<<"enter the value of num"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    
    return 0;
}
