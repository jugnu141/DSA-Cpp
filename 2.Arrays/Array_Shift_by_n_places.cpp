#include<iostream>
#include<algorithm>
using namespace std;

void solve(int arr[],int size,int n)
{
   n=n % size;
   if(n==0)
      return; //no need to do anything
   
   //step-1: Copy last n elements into temp array
   int temp[1000];
   int index=0;
   for(int i=size-n; i<size; i++)
   {
      temp[index]=arr[i];
      index++;
   }
   //step:2 shift array elements by n places in right 
   for(int i=size-1; i>=0; i--)
   {
      if(i-n >= 0)
       arr[i]=arr[i-n];
   }
   //step:3 copy temp elements into original array
   {
      for(int i=0; i<n; i++)
      {
         arr[i]=temp[i];
      }
   }  
}
int main()
{
   int arr[]={3,4,5,6,7};
   int size=5;
   int n=2; //n--> number of places to shift an array in right side
   cout<<"Before: ";
   for(int i=0; i<size; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   solve(arr,size,n);
   cout<<"After Rotation: ";
   for(int i=0; i<size; i++)
   {
      cout<<arr[i]<<" ";
   }
   
   return 0;
}