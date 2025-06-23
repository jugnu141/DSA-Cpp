#include<iostream>
using namespace std;
// it should be square matrix for diagonal sum
//two types of diagonal--
//Seedha Diagonal,,,,Ulta Diagonal

//solving methods
//1)By Single Loop
//2) By Double Loop



void diagonalsum(int arr[][3],int m,int n) 
{
    int sum=0; 
    // for(int r=0; r<m; r++) 
    // {
        
        
    //     for(int c=0; c<n; c++) 
    //     {
    //         if(r==c)
    //        sum=sum+arr[r][c];
           
    //     }
        
        
    //}
    for(int r=0; r<m; r++)
    {sum=sum+arr[r][r];
    }
    cout<<"Diagonal sum= "<<sum<<endl;

}

int main()
{
    int arr[3][3]={{10,20,35}, 
                {30,40,50},    
                {50,50,20}};   
    int rsize=3;
    int csize=3;
    
    diagonalsum(arr,rsize,csize);

   
    return 0;
}