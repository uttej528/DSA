/*Q5: Greatest of two numbers
Write a program to find the greatest of two numbers*/
#include <iostream>
using namespace std;

int main()
{
    int num1,num2=0;
    cout<<"enter the values of num1 and num2"<<endl;
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<"greatest number is "<<num1;
    }else{
         cout<<"greatest number is "<<num2;
    }
    
    
    return 0;
}
