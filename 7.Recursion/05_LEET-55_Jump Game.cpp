//https://leetcode.com/problems/jump-game/description/

//Tutorial Approach
class Solution {
public:
    bool solve(vector<int>& nums,int i)
    {
        //base case
        if(i==(nums.size()-1))
        return true;
        if(i >= nums.size()) return false;
        //if(nums[i]==0) return false; //stack at that index

        bool ans=false;
        for(int j=1; j<=nums[i]; j++)
        {
           ans=ans || solve(nums,i+j); 
        }
        return ans;
    }
    bool canJump(vector<int>& nums) {
        int i=0;
        bool y=solve(nums,i);
        return y;
    }
};
