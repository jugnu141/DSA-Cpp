//https://leetcode.com/problems/house-robber-ii/description/

class Solution {
public:
    void solve(vector<int>& nums,int sum,int s,int e,int &maxSum)
    {
        //Base Case
        if(s > e)
        {
            maxSum=max(maxSum,sum);
            return;
        }

        //include
        solve(nums,sum+nums[s],s+2,e,maxSum);
        //exclude
        solve(nums,sum,s+1,e,maxSum);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
         int sum=0;
        if(n==1) //Single house case--> Ye Mai Bhul Jata hu
            return nums[0];

        int maxSum1=INT_MIN;
        int maxSum2=INT_MIN;
       

        solve(nums,sum,0,n-2,maxSum1); 
        //rob 1st house,but not last house
        solve(nums,sum,1,n-1,maxSum2); 
        //rob last house,but not first house
        return max(maxSum1, maxSum2);
    }
};
