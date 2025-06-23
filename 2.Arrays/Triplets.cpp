//print all triplets

#include<iostream>
using namespace std;
void output(int arr[],int n)
{
    int a=0;
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      {
        for(int k=0; k<n; k++)
        {cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" "<<endl;
        a++;
        }
      }  
    }
    
    cout<<"Total triplets= "<<a;
}

int main()
{
    int arr[]={10,20,30,40};
    int size=4;
    
    output(arr,size);

    return 0;
}