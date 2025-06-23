#include<iostream>
using namespace std;
bool findtarget(int arr[],int n, int target)
{
    for(int i=0; i<n; i++)
        {
            if(arr[i]==target)
            return true;
        }
    return false;
}
int main()
{
    int arr[4]={10,20,30};
    int size=3;
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    bool ans=findtarget(arr,size,target);
    cout<<"Ans= "<<ans;
    

    return 0;
}