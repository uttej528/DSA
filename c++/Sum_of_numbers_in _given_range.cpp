/*Q4: Sum of numbers in a given range
Given two integer inputs num1 and num2, the objective is to write a code to Find the Sum of
Numbers in a Given Range*/
#include <iostream>
using namespace std;

int main()
{
    int fnum,lnum,sum,i=0;
    cout<<"enter the value of fnum and lnum"<<endl;
    cin>>fnum>>lnum;
    
    for(i=fnum;i<=lnum;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    
    return 0;
}
