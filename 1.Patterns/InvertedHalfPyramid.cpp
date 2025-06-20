#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter rows=";
    cin>>a;
    
    for(int r=0; r<a; r++)
    {
        for(int c=0; c<(a-r); c++)
        
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}