#include<iostream>
using namespace std;

bool findTarget(int arr[],int size,int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
            return true;
    }

    //iska matlab pura loop chal chuka hai
    //iska matlab target not found
    //return false
    return false;
}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    bool ans= findTarget(arr,size,target);
    cout<<"Ans: "<<ans;
    //if ans=1,target found
    //if ans=0,target not found

    return 0;
}