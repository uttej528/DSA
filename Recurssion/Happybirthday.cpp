#include <iostream>
using namespace std;


int wish(int n)
{
  
    if(n==0)
    {
        cout<<"Happy Birthday"<<endl;
        return 0;
    }else{
        cout<<n<<"days to go"<<endl;
        wish(n-1);
    }
}
int main()
{
int n=5;
    wish(n);

    return 0;
}