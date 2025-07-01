#include<iostream>
using namespace std;

void  printArray(int arr[], int size, int index)
{
    //base case
    if(index==size)
        return;

    //recursive function
    cout<<arr[index]<<" ";
     printArray(arr,size,index+1);
    //processing
}

int main()
{
    int arr[]={10,30,80,90,67};
    int size=5;
    int index=0;
    printArray(arr,size,index);
    return 0;
}