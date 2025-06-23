#include<iostream>
using namespace std;

void rowsum(int arr[][2],int m,int n) 
{
    
    for(int i=0; i<m; i++)
    {
        int sum=0; 
        //Har row ke liye starting sum zero hai
        for(int j=0; j<n; j++)
        {
           sum=sum+arr[i][j];
           
        }
        //Jab ek row ke saare element add ho gye
        //Sum Print kar do
        cout<<sum<<endl;
    }

}

int main()
{
    int arr[3][2]={{10,20}, // row sum= 30
                {30,40},    // row sum= 70
                {50,50}};   // row sum=100
    int rsize=3;
    int csize=2;
    
    rowsum(arr,rsize,csize);

   
    return 0;
}