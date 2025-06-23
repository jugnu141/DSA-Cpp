#include<iostream>
using namespace std;


void solve(int arr[][3],int m,int n)
{
    int sum=0;
    for(int c=0; c<n; c++)
    {
        
        sum=sum+arr[c][c];
        
    }
    cout<<"Diagonal sum = "<<sum;
}

int main()
{
    int arr[3][3]={{10,20,1}
                    ,{30,40,2},
                    {50,60,3}};
    int rsize=3;
    int csize=3;
    
    solve(arr,rsize,csize);
    
    return 0;
}