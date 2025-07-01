#include<iostream>
using namespace std;
//check whether array is sorted or not
//in strictly increasing order

bool checkSorted(int arr[], int size, int index)
{
    //base case
    if(index==size-1)
        return true;
        //single element in array is treated as SORTED 
    //1 case mai solve
    if(arr[index+1] > arr[index])
    {
        return checkSorted(arr,size,index+1);
    }
    else 
    return false;
    //baaki recursion
}


int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    bool ans=checkSorted(arr,size,index);
    cout<<"Array Sorted Or Not : "<<ans;
    return 0;
}