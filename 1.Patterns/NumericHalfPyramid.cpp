#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<r+1; c++)
        {
            cout<<c+1;
            cout<<" ";
        }
         cout<<endl;

    }
   
    return 0;
}