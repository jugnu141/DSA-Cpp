#include<iostream>
using namespace std;
// print opposite diagonal of square matrix

void solve(int arr[][3],int m,int n)
{
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++)
        {
            if(r+c==n-1) // index relation of opposite diagonal elements
            cout<<arr[r][c]<<" ";
        }
        
    }
    
}

int main()
{
    int arr[3][3]= {{10,20,11},
                    {30,40,12},
                    {50,60,13}};
    int rsize=3;
    int csize=3;
    solve(arr,rsize,csize);
    return 0;
}