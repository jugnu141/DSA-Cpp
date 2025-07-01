//LEET-1981  Minimize the Difference Between Target and Chosen Elements
//https://leetcode.com/problems/minimize-the-difference-between-target-and-chosen-elements/description/


//Tutorial Approach
class Solution {
public:
    void solve(vector<vector<int>>&mat,int target,int sum,int row,int &mini)
    {
        //base case
        if(row==mat.size())
        {
            mini=min(abs(target-sum),mini);
            return;
        }
        for(int col=0; col<mat[row].size(); col++)
        solve(mat,target, sum+mat[row][col],row+1,mini);
    }

    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        int sum=0,row=0,mini=INT_MAX;
        solve(mat,target,sum,row,mini);
        return mini; 
    }
};
