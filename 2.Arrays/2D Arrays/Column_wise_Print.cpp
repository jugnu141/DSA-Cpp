#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={{10,20,100},
                   {30,40,200},
                   {50,60,300}};
    int rsize=3;
    int csize=3;
    for(int j=0; j<csize; j++)       //general method for column wise printing
    {                                //In any type of matrix
        for(int i=0; i<rsize; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}