#include<iostream>
using namespace std;
int findmax(int arr[],int n)
{
    int a=arr[0];
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]>a)
    //     a=arr[i];
    // }
    // return a;
    for(int i=0; i<n; i++)
    {
        a=max(a,arr[i]);
    }
    return a;
}

int main()
{
    int arr[]={0,10,40,34,34,100,25,2,3};
    int size=8;
    int max=findmax(arr,size);
    cout<<"Maximum number = "<<max;

    return 0;
}