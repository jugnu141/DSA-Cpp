#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
void print(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
bool mycomp(int &a, int &b)
{
    //return a<b; //increasing order sorting
    return a>b; //decreasing order sorting
}

void printvv(vector<vector<int>> &v )
{
    for(int i=0; i<v.size(); i++)
    {
        vector<int>temp= v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a <<" "<<b<<endl;
    }
    cout<<endl;
}

bool mycompfor1stindex(vector<int>&a,vector<int>&b){
    //return a[0]<b[0]; //for 0th index sorting
    return a[1]<b[1];  //for 1st index sorting
}
int main()
{
    // vector<int> v = {-9,44,33,55,22,11,99}; 
    // //sort(v.begin(), v.end());//increasing order sorting,,by default
    // sort(v.begin(), v.end(),mycomp);
    // print(v);
    // cout<<endl;

    //vector of vectors
    cout<<"We are making vector of vectors:"<<endl;
    vector<vector<int>>v;
    cout<<"Enter size: ";
    int n; //n is size here
    cin >>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cout<<"Enter a,b : "<<endl;
        cin>>a >> b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<<"Here are the values: "<<endl;
    printvv(v);
    cout<<"Sorted By 1st Index: "<<endl; 
    //sort(v.begin(),v.end());//sorted by 0th index
    sort(v.begin(),v.end(),mycompfor1stindex);
    printvv(v);


    return 0;
}