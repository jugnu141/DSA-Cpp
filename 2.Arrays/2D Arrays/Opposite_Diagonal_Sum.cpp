#include<iostream>
using namespace std;


void solve(int arr[][3],int m,int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j==n-1)
            sum=sum+arr[i][j];
        }       
        
    }
    cout<<"Opposite Diagonal sum = "<<sum;
}

int main()
{
    int arr[3][3]={{10,20,4}
                    ,{30,40,2},
                    {50,60,3}};
    int rsize=3;
    int csize=3;
    
    solve(arr,rsize,csize);
    
    return 0;
}