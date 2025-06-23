#include<iostream>
using namespace std;
void count(int arr[],int n)
{
    int a=0;
    int b=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        a++;
        if(arr[i]==1)
        b++;
    }  
    cout<<"Total number of zeroes= "<<a<<endl;
    cout<<"Total number of ones= "<<b<<endl;

}

int main()
{
    int arr[]={1,1,0,1,0,0,1,1,1};
    int size=9;
    count(arr,size);
    

    return 0;
}