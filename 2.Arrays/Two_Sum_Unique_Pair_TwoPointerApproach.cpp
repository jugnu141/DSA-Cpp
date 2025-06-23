#include<iostream>
#include<algorithm>
using namespace std;

void solve(int arr[],int size,int target)
{
   int left=0;
   int right=size-1;
   sort(arr,arr+size);
   int a=1;
   while(left<right)
   {
      int sum=arr[left]+arr[right];
      if(sum==target)
      {
         if(a==1)
            cout<<"Target found,and such pairs are ="<<endl;
         cout<<"("<<arr[left]<<","<<arr[right]<<") ";
         left++;
         right--;
         a=0;
      }
      else if(sum<target)
         left++;
      else
         right--;
   }
   if(a==1)
      cout<<"No Target Found";

      
}
int main()
{
   int arr[]={4,3,6,5};
   int size=4;
   int target;
   cout<<"Target value = ";
   cin>>target;
   solve(arr,size,target);
   return 0;
}