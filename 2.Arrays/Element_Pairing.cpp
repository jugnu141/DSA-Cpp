//print the pairs of elements in the given array
//there are many combination of pairs

#include<iostream>
using namespace std;
void output(int arr[],int n)
{
    for(int i=0; i<n; i++)    // Full pairs
    {
        for(int j=0; j<n; j++)
        cout<<"("<<arr[i]<<","<<arr[j]<<") "<<endl;
    }
    

    // for(int i=n; i>0; i--)  //half pairs including middle pairs having same elements
    // {
    //     for(int j=0; j<=i; j++)
    //     cout<<"("<<arr[i]<<","<<arr[j]<<") "<<endl;
    // }

    // for(int i=0; i<n; i++) // remaining half pairs
    // {
    //     for(int j=i; j<n; j++)
    //     cout<<"("<<arr[i]<<","<<arr[j]<<") "<<endl;
    // }

    //All other pairing are possible,Do by yourself
}

int main()
{
    int arr[]={10,20,30,40};

    int size=4;
    output(arr,size);

    return 0;
}