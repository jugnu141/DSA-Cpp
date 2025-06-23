#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,7,8,9,11,23,67};
    int n=11;
    int target=99;
    bool ans=binary_search(arr,arr+n,target);
    cout<<"Answer is = "<<ans;
}