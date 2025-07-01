//LEET-198 https://leetcode.com/problems/house-robber/

class Solution {
public:
    int solve(vector<int>&nums,int size,int i)
    {
        //base case
        if(i >= size)
            return 0;
        //include
        int includeAns=nums[i]+solve(nums,size,i+2);
        //exclude
        int excludeAns=solve(nums,size,i+1);
        return max(includeAns,excludeAns);
    }
    int rob(vector<int>& nums) {
       int size=nums.size();
       int i=0;
       int ans=solve(nums,size,i); 
       return ans;
    }
};
