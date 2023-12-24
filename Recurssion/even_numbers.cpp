#include <iostream>
using namespace std;


int even(int n)
{
  
    if(n==10)
    {
        cout<<n<<endl;
        return 0;
    }else{
        if(n%2==0)
        {
            cout<<n<<endl;
        }
        even(n+1);
    }
}
int main()
{
int n=0;
    even(n);

    return 0;
}
