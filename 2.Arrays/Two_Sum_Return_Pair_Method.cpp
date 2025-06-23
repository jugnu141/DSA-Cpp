#include<iostream>
#include<algorithm>
using namespace std;
//only one pair will return for any target
//be careful,it will not give all pair

pair<int,int> solve(int arr[],int size,int target)
{
   pair<int,int>ans=make_pair(-1,-1);
   for(int i=0; i<size; i++)
   {
      for(int j=0;j<size; j++)
      {
         if(arr[i]+arr[j]==target)
         {
            ans.first=arr[i];
            ans.second=arr[j];
            return ans;
         }
      }
   }
   return ans;
}
int main()
{
   int arr[]={4,3,6,5};
   int size=4;
   int target;
   cout<<"Target value = ";
   cin>>target;
   pair<int,int>ans= solve(arr,size,target);
   if(ans.first==-1 && ans.second==-1)
   {
      cout<<"Pair not found";
   }
   else{
      cout<<"Pair found: "<<ans.first<<","<<ans.second;
   }
   return 0;
}