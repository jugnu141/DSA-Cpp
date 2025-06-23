#include<iostream>
using namespace std;

void transpose(int arr[][3],int m,int n) 
{
    
    
    for(int r=0; r<m; r++) 
    {
        for(int c=r; c<n; c++) //column wise travel,only after diagonal 
        // To avoid double swappaing
        // Half Triangle pattern will form in travelling this
        // *-*-*-* this pattern followed in travelling to avoid 
        // * *-*-* double swapping
        // * * *-*
        // * * * *
        {
        //   int temp=arr[r][c];
        //   arr[r][c]=arr[c][r];
        //   arr[c][r]=temp;
          swap(arr[r][c],arr[c][r]);  // function to swap numbers directly
        }
    }
   cout<<"Matrix After Transpose: "<<endl;
    for(int r=0; r<m; r++) 
    {
        for(int c=0; c<n; c++) 
        {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3]={{10,11,12}, 
                {30,31,32},    
                {50,51,52}};   
    int rsize=3;
    int csize=3;

     cout<<"Current Matrix: "<<endl;
    for(int r=0; r<rsize; r++) 
    {
        for(int c=0; c<csize; c++) 
        {
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
    
   transpose(arr,rsize,csize);

   
    return 0;
}