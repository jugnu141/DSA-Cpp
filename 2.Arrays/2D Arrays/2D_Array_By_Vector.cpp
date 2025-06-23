#include<iostream>
#include<vector>
using namespace std;
//Vector is same as array
//vector is also called dynamic array
int main()
{
    vector<vector<int>>arr(4,vector<int>(3,40));//2D vector named arr,
    //having 4 rows and 3 columns,All initialized with zero
    
    int rowsize=arr.size(); // for row size
    int colsize=arr[0].size(); // for column size

    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

