#include <iostream>
#include <vector>
using namespace std;

void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp)
{
    if(index==n){
    ans.push_back(temp);
    return;
    }
    
    //no
      subseq(arr,index+1,n,ans,temp);
    //yes
    temp.push_back(arr[index]);
    subseq(arr,index+1,n,ans,temp);
    temp.pop_back();
    
}



int main()
{   
    int index=0;int n=3;
    int arr[]={1,2,3};
    vector<vector<int>> ans;
    vector<int> temp;
    
    subseq(arr,index,n,ans,temp);
    
    for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}
