#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//rotate a given matrix by 90 degree clockwise
//step-1 Transpose of the matrix
//step-2 row wise element reversal of transposed matrix

void rotateimage(vector<vector<int>> &image)
{
    
    //step-1 transpose of matrix
    for(int i=0; i<image.size(); i++)
    {
        for(int j=i; j<image[0].size(); j++)
        {
            swap(image[i][j],image[j][i]);
        }
    }
    //step-2 Row wise reverse
    for(int i=0; i<image.size(); i++)
    {
        reverse(image[i].begin(),image[i].end());
    }

    //print the required matrix
    cout<<"Rotated matrix: "<<endl;
    for(int i=0; i<image.size(); i++)
    {
        for(int j=0; j<image[0].size(); j++)
        {
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>>image={
                {1,2,3},
                {5,6,7},
                {2,6,9}
    };
    cout<<"Given matrix:"<<endl;
    for(int i=0; i<image.size(); i++)
    {
        for(int j=0; j<image[0].size(); j++)
        {
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
    rotateimage(image);

}