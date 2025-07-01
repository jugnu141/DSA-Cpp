//https://leetcode.com/problems/jump-game-ii/description/

//Tutorial Approach
class Solution {
public:
    
    void solve(vector<int>& nums,int i,int &min_jump,int step)
    {
        //base case
        if(i==nums.size()-1)
        {
            min_jump=min(min_jump,step);
            return;
        }
        if(i >= nums.size())
            return;
        for(int j=1; j<=nums[i]; j++)
            solve(nums,i+j,min_jump, step + 1);
    }

    int jump(vector<int>& nums) {
        int min_jump=INT_MAX;
        int i=0;
        int step=0;
        solve(nums,i,min_jump,step);
        return min_jump;
    }
};
