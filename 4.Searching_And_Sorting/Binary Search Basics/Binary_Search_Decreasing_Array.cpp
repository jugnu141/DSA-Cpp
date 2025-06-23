//sorted array is given----decreasing order
//find if target element is present, by binary search

#include<iostream>
using namespace std;

bool solve(int arr[],int n,int a)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2; //use this formula to avoid integer overflow
        // bad student use----mid=(s+e)/2

        if(a==arr[mid])
        return true;

        else if(a<arr[mid])
        s=mid+1; // right me jaao

        else if(a>arr[mid])
        {e=mid-1; // left me jaao
        }

        // ye mai bhul jata hu
        // mid=s+(e-s)/2;
    }
    //agar yahan tak pahucha
    //To element nahi mila
    return false;
}

int main()
{
    int arr[]={34,30,24,21,19,15,3,2,1};
    int size=9;
    int target=9;
    bool ans=solve(arr,size,target);
    cout<<"Answer is = "<<ans;
    return 0;
}
