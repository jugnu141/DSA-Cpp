#include<iostream>
using namespace std;

bool solve(int arr[][2],int m,int n,int target) //specify the total column in function
// 
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]==target)
            return true;
        }
    }
    //agar line 14 tak pahuch
    //iska matlab sara loop search ho gya
    //target not found
    //return false
    return false;
}

int main()
{
    int arr[3][2]={{10,20},
                {30,40},
                {50,60}};
    int rsize=3;
    int csize=2;
    int target=55;
    bool ans = solve(arr,rsize,csize,target);

    cout<<"Answer is= "<<ans;
    // 1 means true---element found
    // 0 means false--element not found
    return 0;
}