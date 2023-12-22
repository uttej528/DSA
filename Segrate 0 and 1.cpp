#include <iostream>

using namespace std;

int main()
{
    int n=7;
    int arr[7]={0,1,1,0,0,0,1};
    
    int start=0;
    int end =n-1;
   int temp=0;
   int i;
    
    while(start<end){
        if(arr[start]==0)
        {
            start++;
        }
        else{
            if(arr[end]==0)
            {
               temp=arr[start];
               arr[start]=arr[end];
               arr[end]=temp;
               start++;
               end--;
            }else{
                end--;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
