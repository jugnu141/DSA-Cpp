#include<iostream>
using namespace std;

void output(int arr[],int n)
{
    
    for(int i=0; i<n; i++)
    {
        
        for(int j=i+1; j<n;j++)
        {
            if(arr[i]>arr[j])
            { 
               int a=arr[i];
               arr[i]=arr[j];
               arr[j]=a;
            }
             
        }
        
    }
    
}

int main()
{
    int arr[]={0,1,1,1,0,1,0,0,1};
    int size=9;
    output(arr,size);
    for(int i=0; i<size; i++)
    cout<<arr[i];
    
    return 0;

}