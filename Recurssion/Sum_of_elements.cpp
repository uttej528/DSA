//print array using array
#include <iostream>
using namespace std;

int print(int arr[],int index,int sum,int n)
{
    if(index==n)
    {
        return sum;
    }else{
        sum=sum+arr[index];
        return print(arr,index+1,sum,n);
    }
}

int main()
{
    int n=5;int sum=0;
    int arr[5]={3,7,6,2,8};
    int index=0;
   int res=print(arr,index,sum,n);
   cout<<res;

    return 0;
}
