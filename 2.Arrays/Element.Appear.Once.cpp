//find out elements in array which appears only once,
//while others appear more than once
// Square time complexity
//use XOR for linear time complexity(only one element appear once,
//while others appear twice )
#include<iostream>
using namespace std;
void output(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        int a=0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
                a=a+1;
        }
        if(a==1)  //single appearing element
        cout<<"Single appearing element: "<<arr[i]<<endl;
    }
    
}
int main()
{
    int arr[]={1,2,3,2,3,4,5,4,9};

    int size=9;
    output(arr,size);

    return 0;
}