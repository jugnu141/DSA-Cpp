#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={{10,20,100},
                 {30,40,200},
                {50,60,300}};
    int rsize=3;
    //int csize=3;
    // for(int i=0; i<rsize; i++)     // Using nested loop
    // {
    //     for(int j=0; j<csize; j++)
    //     {
    //         if(i==j)
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<rsize; i++)   // Using single loop--have better time complexity
    {
        cout<<arr[i][i]<<endl;
    }

    return 0;
}