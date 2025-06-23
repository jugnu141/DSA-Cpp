//First Occurenece of Target element
//return its index
//Store and compute Technique
//use binary search T.C--O(log n)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int>arr,int target)
{
    int n=arr.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2; //prevents integer overflow
    int firstoccurrence=-1;
    while(s<=e)
    {
        if(target==arr[mid])
        {
            //may or may not be first occurrenece index
            //store and compute
            firstoccurrence=mid;
            //it will be updated everytime with least index

            //first occurence ke liye left me jaao
            e=mid-1;
        }
        else if(target<arr[mid])
            e=mid-1;
        else if(target>arr[mid])
            s=mid+1;
        
        mid=s+(e-s)/2;
    }
    return firstoccurrence;
}

int main()
{
    vector<int>arr={1,2,3,20,20,20,30,40,50,60,70};
    //must be sorted array for binary search
    //ascending order
    int target=20;
    int ans=solve(arr,target);
    if(ans==-1)
        cout<<"Target not found";
    else
        cout<<"First Occurenece Element index is = "<<ans;
    return 0;
}