//Check if a pair exist ,whose sum is eqal to target sum

#include<iostream>
using namespace std;
void output(int arr[],int n,int target)
{
    int a=0;
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        if(arr[i]+arr[j]==target)
        a++;

      }  
    }
    if(a==0)
     cout<<"no such pair";
    else
    cout<<"Total such pairs= "<<a;
}

int main()
{
    int arr[]={10,5,20,15,30};
    int size=5;
    int target=15;
    output(arr,size,target);

    return 0;
}