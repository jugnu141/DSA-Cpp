https://leetcode.com/problems/triangle/description/

//Tutorial Approach
class Solution {
public:
    void solve(vector<vector<int>>& triangle,int row,int col,int sum,int &mini)
    {
        //base case;
        if(row==triangle.size())
        {
          mini=min(mini,sum);
          return;  
        }
        solve(triangle,row+1,col,sum+triangle[row][col],mini);
        solve(triangle,row+1,col+1,sum+triangle[row][col],mini);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int row=0;
        int col=0;
        int mini=INT_MAX;
        int sum=0;
        solve(triangle,row,col,sum,mini);
        return mini;
    }
};
