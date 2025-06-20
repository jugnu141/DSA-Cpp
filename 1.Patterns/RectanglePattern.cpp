#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number of rows= ";
    cin>>a;
    cout<<"Enter number of columns= ";
    cin>>b;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}