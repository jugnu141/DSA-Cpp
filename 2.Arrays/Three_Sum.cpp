//sum of triplet is equal to target sum
//each element must be unique

#include<iostream>
using namespace std;
void output(int arr[],int n,int target)
{
    int a[5];
    for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<n; j++)
      {
        for(int k=j+1; k<n; k++)
        {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                }
               
        }
       

      }  
    }
    
}

int main()
{
    int arr[]={10,5,20,15,30};
    int size=5;
    int target=35;
    output(arr,size,target);
    
    return 0;
}