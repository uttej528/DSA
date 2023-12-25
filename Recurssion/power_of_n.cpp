#include <iostream>
using namespace std;

int power(int n,int x)
{
    if(x==1)
    {
        return(n);
    }else{
        return n*power(n,x-1);
    }
}

int main()
{
    int n,x;
    n=2;x=4;
    //res is 16
   int res=power(n,x);
   cout<<res;

    return 0;
}
