#include<iostream>
using namespace std;
void output(int arr[],int n)
{
    for(int i=n; i>0; i--)
    {
        cout<<arr[i-1]<<" ";
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};

    int size=9;
    output(arr,size);

    return 0;
}