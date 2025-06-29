//https://www.spoj.com/problems/EKO/
//Binary Search approah
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<long long int>&trees,long long int m,
long long mid)
{
    long long int woodcollected=0;
    for(int i=0; i<trees.size(); i++)
    {
        if(trees[i] > mid)
            woodcollected += trees[i]-mid;
    }
    return woodcollected >= m;
}

int Saw_Blade_Height(vector<long long int>&trees,long long int m)
{
    long long int s,e,ans;
    ans=-1;
    s=0;
    //e=max height
    e=*max_element(trees.begin(),trees.end());
    //in built STL to find max element in an array
    while(s <= e)
    {
        long long int mid=s+(e-s)/2;
        if(isPossibleSolution(trees,m,mid))
        {
            ans=mid;
            s=mid+1; //for max height, move right
        }
        else
            e=mid-1;
    }
    return ans;

}

int main()
{
  long long int n,m;
  // n-> no of trees, 
  // m-> requred length of wood
  cout<<"number of trees : ";
  cin>>n;
  cout<<"Required length of wood: ";
  cin>>m;
  vector<long long int>trees;
  cout<<"Enter height of each tree "<<endl;
  while(n--){
    long long int height;
    cin>>height;
    trees.push_back(height);
  }

  long long int ans=Saw_Blade_Height(trees,m);
  cout<<"Height of SawBlade is : "<<ans;
  return 0;
}
