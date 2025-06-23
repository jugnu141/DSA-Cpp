
//find out the element in array which appears only once,
//while others appear twice
// conditions=linear time complexity
//it can be done using XOR operator
//XOR all the number
#include<iostream>
using namespace std;
int output(int arr[],int n)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {ans=ans^arr[i];
    }
    return ans;
    
}
int main()
{
    int arr[]={8,2,3,2,3,4,4,};

    int size=7;
    int a=output(arr,size);
    cout<<"Element appearing once is: "<<a;
    return 0;
}