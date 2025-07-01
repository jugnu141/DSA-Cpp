//https://leetcode.com/problems/partition-equal-subset-sum/description/
//LEET-416
//My Approach, Tutorial Approach

//Tutorial Approach
class Solution {
public:
    bool solve(vector<int>&nums,int target,int i)
    {
        //base case;
        if(target==0) return true;//always success case first
        if(target < 0  || i==nums.size()) return false;

        bool include=solve(nums,target-nums[i],i+1);
        bool exclude=solve(nums,target,i+1);
        return include || exclude;
    }

    bool canPartition(vector<int>& nums) {
      int sum=accumulate(nums.begin(),nums.end(),0);
      if(sum %2  != 0) //odd sum
        return false;

      int target=sum/2;
      int i=0;
      return solve(nums,target,i); 
    }
};
