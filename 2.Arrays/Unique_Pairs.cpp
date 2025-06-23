

#include<iostream>
using namespace std;
void output(int arr[],int n)
{

    for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<n; j++)
      {
        cout<<arr[i]<<","<<arr[j]<<endl;
      }  
    }
    
}

int main()
{
    int arr[]={10,5,20,15,30};
    int size=5;

    output(arr,size);

    return 0;
}