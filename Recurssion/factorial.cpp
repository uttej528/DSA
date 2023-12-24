#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }else{
        return n*fact(n-1);
       
    }
    
}



int main()
{
    int n=5;
    int res=fact(n);
   cout<<res;

    return 0;
}
