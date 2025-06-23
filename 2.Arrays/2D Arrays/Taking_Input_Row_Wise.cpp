#include<iostream>
using namespace std;

int main()
{
    int arr[3][2];
    int rsize=3;
    int csize=2;
    for(int i=0; i<rsize; i++)  //row wise taking input     
    {                                
        for(int j=0; j<csize; j++)
        {
            cout<<"Enter the value of ("<<i<<","<<j<<") : ";
            cin>>arr[i][j];
        }
    }

    cout<<"2-D Array Printing"<<endl;
    for(int i=0; i<rsize; i++)      //row wise printing 
    {                                
        for(int j=0; j<csize; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }   
    return 0;
}