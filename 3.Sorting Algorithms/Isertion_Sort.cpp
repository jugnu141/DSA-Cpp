#include<iostream>
#include<vector>
using namespace std; 
void print(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(vector<int> &v)
{
   int n=v.size();
   //i=0; chor deta hu
   for(int i=1; i<n; i++)
   {
        int key=v[i];
        int j=i-1; 
        //shift elements from (0...i-1) to right
        //that are greater than key
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;//insertion key
   }
}

int main()
{
    vector<int> v = {-9,44,33,55,22,11,99}; 
    insertionSort(v);
    print(v);
    return 0;
}