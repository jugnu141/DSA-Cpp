#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int BinarySearch(int arr[],int size,int target,int s,int e)
{   
   
    if(s>e) //base case
        return -1; //not found

    int mid= s+(e-s)/2;
    if(target==arr[mid]) 
        return mid;     
    if(target>arr[mid])
    {
        s=mid+1; //go right
        return BinarySearch(arr,size,target,s,e);
    }
    else
    {
        e=mid-1; //go left
        return BinarySearch(arr,size,target,s,e);
    }
    
}


int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int target=50;
    int s=0;
    int e=size-1;
    int ans = BinarySearch(arr,size,target,s,e);
    cout<<"Answer index = "<<ans;
    
    return 0;
}