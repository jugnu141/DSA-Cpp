//https://leetcode.com/problems/maximal-square/

class Solution {
public:
    //TLE by Recursion, DP is optimized
    int solve(vector<vector<char>>& matrix, int i,int j,int row,int col,int &maxi)
    {
        //Base Case
        if(i >= row || j>= col)
            return 0;

        //Explore All 3 direction in each cell
        int right=solve(matrix, i, j+1, row, col, maxi);
        int diagonal=solve(matrix, i+1, j+1,row,col, maxi);
        int down=solve(matrix, i+1, j, row, col,maxi);

        //check can we build Square from current position
        if(matrix[i][j]=='1')
        {
            int ans=1 + min(right, min(diagonal,down));
            maxi=max(maxi,ans);
            return ans;
        }
        else
            return 0;
    }

    int maximalSquare(vector<vector<char>>& matrix) {
       int i=0;
       int j=0;
       int maxi=0;
       int row=matrix.size();
       int col=matrix[0].size();
       int ans=solve(matrix,i,j,row,col,maxi);
       return maxi*maxi;
    }
};
