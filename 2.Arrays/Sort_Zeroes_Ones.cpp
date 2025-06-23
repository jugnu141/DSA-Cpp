//methods to solve:
//1)Counting zeroes and one-----O(n)->Time complexity
//2)by Sorting method(in built sort function)------O(nlogn)->Time Complexity
//3)By two pointer approach(using two loops i and j)

#include<iostream>
#include<algorithm> //to include sort function
using namespace std;
// void output(int arr[],int n)
// {
    // int zeroes=0;                 
    // int ones=0;
    // for(int i=0; i<n; i++ )
    // {
    //     if(arr[i]==0)
    //     zeroes++;
    //     if(arr[i]==1)
    //     ones++;
    // }

    // for(int i=0; i<zeroes; i++)  // by counting
    // cout<<"0";
    // for(int i=0; i<ones; i++)
    // cout<<"1";

    // fill(arr, arr+zeroes,0);    //Insertion using fill function
    // fill(arr+zeroes, arr+n,1);

//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==0)
//         cout<<arr[i];   // Direct printing without coutning
        
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==1)
//         cout<<arr[i];
        
//     }


// }

int main()
{
    int arr[]={1,0,0,1,0,1,1,0,0,0};

    int size=10;
    sort(arr,arr+size); //using in built sort function-----to sort an array
    // output(arr,size);

    //used to print sorted array
    for(int i=0; i<size; i++) 
    cout<<arr[i];

    return 0;
}
