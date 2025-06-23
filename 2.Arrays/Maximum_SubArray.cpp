#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
//find subarray with largest sum and return its sum


//1.By Brute Force Approcah--T.C O(n^2)
int bruteforce(vector<int> &arr)
{
    int size=arr.size();
    int ans=INT_MIN; //its most safe for all edge cases 
    //int ans=arr[0];
    for(int i=0; i<size; i++)
    {
        int sum=0;
        for(int j=i; j<size; j++)
         //j=i bcz we always see forward
        {
            sum=sum+arr[j];
            //saare subarrays ka sum nikalega
            //with arr[i] as pivot,
            // means arr[i] is first element in sum
            ans=max(ans,sum);
        
        }
    }
    return ans;
}

    //2. By Kadene algorithm T.C O(n)
    int kadenealgo(vector<int> &arr){
    int size=arr.size();
    int ans=INT_MIN;
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum + arr[i];
        ans=max(ans,sum);
        if(sum<0)
            sum=0;
    }
    return ans;
    }





int main()
{
    vector<int>arr={5,4,-1,7,8};
    //int ans=bruteforce(arr);
    int ans=kadenealgo(arr);
    cout<<"Maximum sum is = "<<ans;
}