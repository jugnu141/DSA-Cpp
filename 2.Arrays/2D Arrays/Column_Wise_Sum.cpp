#include<iostream>
using namespace std;

void rowsum(int arr[][2],int m,int n) 
{
    
    for(int c=0; c<n; c++) // Outer loop is for column
    {
        int sum=0; 
        //Har column ke liye starting sum zero hai
        for(int r=0; r<m; r++) // inner loop row ka hai
        {
           sum=sum+arr[r][c];
           
        }
        //Jab ek column ke saare element add ho gye
        //Sum Print kar do
        cout<<sum<<endl;
    }

}

int main()
{
    int arr[3][2]={{10,20}, // column sum= 90,110
                {30,40},    
                {50,50}};   
    int rsize=3;
    int csize=2;
    
    rowsum(arr,rsize,csize);

   
    return 0;
}