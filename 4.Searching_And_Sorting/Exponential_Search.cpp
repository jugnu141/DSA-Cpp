#include<iostream>
using namespace std;
int binarySearch(int a[],int s,int e,int k)
{
    while(s <= e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]==k)
            return mid;
        else if(k > a[mid])
            s=mid+1;
        else
            e=mid-1;
    }
    return -1;
}

int expSearch(int a[],int n,int x)
{
    if(a[0] ==x) return 0;
    int i=1;
    while(i<n && a[i] <= x)
        i=i*2; //i*=2  //i=i <<1 
    return binarySearch(a,i/2,min(i,n-1),x); 


}

int main()
{
    int arr[]={3,4,5,6,11,13,14,15,56,60};
    int n=10;
    int x=56;
    int ans=expSearch(arr,n,x);
    cout<<"Target index ="<<ans;
    return 0;
}