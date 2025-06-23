#include<iostream>
using namespace std;
//find maximum number in array

int maxNum(int arr[],int size)
{
   int a=arr[0];
   for(int i=0;i<size; i++)
   {
    if(arr[i]>a)
      a=arr[i];
   }
   return a;
}

int main()
{
    int arr[]={-4,-43,-3,-5,-1};
    int size=5;
    
    int ans=maxNum(arr,size);
    cout<<"Maximum number= "<<ans;
    
    
    return 0;
}