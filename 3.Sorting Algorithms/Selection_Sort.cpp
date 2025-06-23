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
void selectionsort(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n-1; i++)
    {
        int minindex=i;
         //ith index ko min index maan lete
        for(int j=i+1; j<n; j++)
        //to find min element index
        {
            if(v[j]<v[minindex])//increasing order
            //if(v[j]>v[minindex])//decreasing order
                minindex=j;
        }
        //swap ith and minindex element
        swap(v[i],v[minindex]);
    }
}

int main()
{
    vector<int> v = {44,33,55,22,11};
    selectionsort(v);
    print(v);
    return 0;
}