//GFG https://www.geeksforgeeks.org/problems/generating-all-subarrays/1

//My Solution
// User function Template for C++
#include<vector>
using namespace std;
class Solution {
  public:
    void solve(vector<int>& arr, vector<vector<int>>&ans,int i)
    {
        //base case; 
        if(i>=arr.size())
        {
            return;
        }
        
       // 1 case mai solve karunga, baaki recursion karega
        for(int j=i; j<arr.size(); j++)
        {
             vector<int>temp;
             for(int k=i; k<=j; k++)
             {
                temp.push_back(arr[k]); 
             }
             ans.push_back(temp);
             
        }
        solve(arr,ans,i+1);
    }
  
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        int i=0;
        solve(arr,ans,i);
        return ans;
    }
};
