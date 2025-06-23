#include<iostream>
using namespace std;

int main()
{
    int arr[3][2]={{10,20},{30,40},{50,60}};
    int rsize=3;
    int csize=2;
    for(int i=0; i<rsize; i++)
    {
        for(int j=0; j<csize; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}