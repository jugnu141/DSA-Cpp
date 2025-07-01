#include<iostream>
using namespace std;

bool TargetSearch(int arr[], int size, int index,int target)
{
    //base case
    //2 base case-> target not found/found
    // target not found
    if(index==size) //invalid index/out of bound index
        return false; 
    if(arr[index]==target) //found
        return true;
    //recursive relation
    bool ans= TargetSearch(arr,size,index+1,target);
    return ans;
    //processing
}

int main()
{
    int arr[]={10,30,80,90,67};
    int size=5;
    int index=0;
    int target=30;
    cout<<TargetSearch(arr,size,index,target);
    return 0;
}