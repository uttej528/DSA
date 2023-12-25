//print array using array
#include <iostream>
using namespace std;

void print(int arr[],int index,int n)
{
    if(index==n)
    {
        return;
    }else{
        cout<<arr[index]<<" ";
        print(arr,index+1,n);
    }
}

int main()
{
    int n=5;
    int arr[5]={3,7,6,2,8};
    int index=0;
    print(arr,index,n);

    return 0;
}
