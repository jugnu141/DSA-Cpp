//given array whose element in range [o,n]
//find the missing element

//case-1) Missing element in middle
//case-2) Msiing Element in extreme left
//case-3) Missing element in extreme right-------Important case


#include<iostream>
#include<algorithm>
using namespace std;

int solve(int arr[],int n)
{
    sort(arr,arr+n);
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+ (e-s)/2;
        int diff=arr[mid]-mid;
        if(diff==1) //left me jaao
        {
            ans=mid; //store and compute
            e=mid-1;
        }
        if(diff==0) //right me jaao
        s=mid+1;
    }
    //ye mujhse galat ho gya tha
    //for extreme right element missing case,we
    //are hardcoding the logic below
   if(ans==-1)
   {return n;
   }
   else
   return ans;
}

int main()
{
    int arr[]={5,6,4,3,8,1,0,7};
    int size=8;
    int ans=solve(arr,size);
    cout<<"Missing element is ="<<ans;
    return 0;
}