#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//storing odd numbers in vector,then printing vector

void PrintAllOdds(int arr[], int size, int index,vector<int> &ans)
{
   if(index==size)
    return;

    if(arr[index]%2==1)
        //cout<<arr[index]<<" ";
        ans.push_back(arr[index]);
    PrintAllOdds(arr,size,index+1,ans);
}

int main()
{
    int arr[]={99,30,80,101,67};
    int size=5;
    int index=0;
    vector<int>ans;
   
   PrintAllOdds(arr,size,index,ans);
   for(int i=0; i<ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }
    return 0;
}