#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows=";
    cin>>n;
   for(int r=0; r<n; r++) 
    {
       
        for(int c=0; c<n-r; c++)
        {
            if(r==0 || r==n-1 || c==0 || (r+c)==(n-1))
                cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }  
    return 0;
}