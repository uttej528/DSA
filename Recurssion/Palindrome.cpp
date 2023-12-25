//check palindrome using recurssion
#include <iostream>
using namespace std;

bool palindrome(string str,int left,int right)
{
    if(left>=right)
    {
        return 1;
    }
    
    if(str[left]!=str[right])
    {
        return 0;
    }else{
        return palindrome(str,left+1,right-1);
    }
}

int main()
{
   string str="naman";
   int left=0;
   int right=str.length()-1;
  int Bool= palindrome(str,left,right);
  if(Bool==0)
  {
      cout<<"not a palindome";
  }else{
      cout<<"palindome";
  }
   
   

    return 0;
}
