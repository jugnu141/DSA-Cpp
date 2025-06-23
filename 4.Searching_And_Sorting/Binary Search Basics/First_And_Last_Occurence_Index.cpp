//Leetcode-34
//Last Occurenece of Target element
//return its index
//Store and compute Technique
//use binary search T.C--O(log n)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>solve(vector<int>arr,int target)
{
    int n=arr.size();
    vector<int>ans;
    //vector<int>ans(2,-1);
    //ans vector with size 2 and each value -1
    //if(n==0)
        //return ans;
    int firstoccurrence=-1;
    int lastoccurrence=-1;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2; //prevents integer overflow
    while(s<=e)
    {
        if(target==arr[mid])
        {
            //may or may not be last occurrenece index
            //store and compute
            firstoccurrence=mid;
            //ans[0]=mid;
            //it will be updated everytime with lowest index

            //first occurence ke liye left me jaao
            e=mid-1;
        }
        else if(target<arr[mid])
            e=mid-1;
        else if(target>arr[mid])
            s=mid+1;
        
        mid=s+(e-s)/2;
    }  
    //reset s,e,mid for next binary search
    s=0;
    e=n-1;
    mid=s+(e-s)/2;

    while(s<=e)
    {
        if(target==arr[mid])
        {
            //may or may not be last occurrenece index
            //store and compute
            lastoccurrence=mid;
            //ans[1]=mid
            //it will be updated everytime with highest index

            //last occurence ke liye right me jaao
            s=mid+1;
        }
        else if(target<arr[mid])
            e=mid-1;
        else if(target>arr[mid])
            s=mid+1;
        
        mid=s+(e-s)/2;
    }
    ans.push_back(firstoccurrence);
    ans.push_back(lastoccurrence);
    return ans;


}

int main()
{
    vector<int>arr={1,2,3,20,20,20,30,40,50,60,70};
    //must be sorted array for binary search
    //ascending order
    int target=20;
    vector<int>ans=solve(arr,target);
    cout<<"first and last occurrence indexes are= ";
    int n=ans.size();
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}