#include<iostream>
#include<algorithm> // for min,max function
using namespace std;

void minimum(int arr[][2],int m,int n) 

{
    int minvalue=arr[0][0];
    int maxvalue=arr[0][0];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           minvalue=min(minvalue,arr[i][j]);
           maxvalue=max(maxvalue,arr[i][j]);
           
        }
    
    }
    cout<<"Minimum Value= "<<minvalue<<endl;
    cout<<"Minimum Value= "<<maxvalue;

    //overall T.C---> O(m*n)
    //Overall Space.C--->O(1)....2 int
}

int main()
{
   int arr[3][2]={{-5,0},
                {30,40},
                {50,60}};
    
    int rsize=3; // for row size
    int csize=2; // for column size

    
    
    minimum(arr,rsize,csize);
    return 0;

}

