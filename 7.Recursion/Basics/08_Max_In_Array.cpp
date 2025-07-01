#include<iostream>
#include<algorithm>
using namespace std;

int MaxInArray(int arr[], int size, int index,int maxi)
{
    //base case
    if(index==size)
        return maxi ;
    maxi=max(maxi,arr[index]);
    //recursive relation
    int ans = MaxInArray(arr,size,index+1,maxi);
    return ans;
    //processing
}

int main()
{
    int arr[]={99,30,80,101,67};
    int size=5;
    int index=0;
    int maxi=arr[0];
    cout<<"Max no->"<<MaxInArray(arr,size,index,maxi);
    return 0;
}