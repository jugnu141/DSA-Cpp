#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows=";
    cin>>n;
    
    for(int r=0; r<n; r++)
    {
        //for spaces
        for(int j=0; j<n-r-1; j++)
        cout<<" ";

        //for stars
        for(int c=0; c<r+1; c++)
        {cout<<"* ";
        }
        cout<<endl;
        
    } 

    for(int r=0; r<n; r++)
    {
        //for spaces
        for(int j=0; j<r; j++)
        cout<<" ";

        //for stars
        for(int c=0; c<n-r; c++)
        {cout<<"* ";
        }
        cout<<endl;
        
    } 
    return 0;
}