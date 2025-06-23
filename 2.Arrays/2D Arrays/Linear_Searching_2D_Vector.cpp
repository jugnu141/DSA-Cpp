#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> arr, int target) // pass by value
//array pass by reference, in function
//Vector pass by value ,in function
//(vector<vector<int>> &arr), pass by reference in vector
// Array has only pass by reference
// Vector has both pass by value and pass by reference

{
    int rowsize=arr.size();
    int colsize=arr[0].size();

    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
           if(arr[i][j]==target)
           return true;
        }
    
    }
    return false;
}

int main()
{
    vector<vector<int>>arr(2,vector<int>(3,0));
    
    int rowsize=arr.size(); // for row size
    int colsize=arr[0].size(); // for column size

    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<colsize; j++)
        {
            cout<<"value for ("<<i<<","<<j<<") = ";
            cin>>arr[i][j];
        }
    
    }
    int target=25;
    bool ans = search(arr,target);
    cout<<"Answer is = "<<ans;

}

