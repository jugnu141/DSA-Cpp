//LEET-198 https://leetcode.com/problems/house-robber/
//Tutorial Approach
//My Approach


//My Approach
class Solution {
public:
    void solve(vector<int>&nums,int i,int sum,int &maxSum)
    {
        //base case
        if(i >= nums.size())
        {
            maxSum=max(maxSum,sum);
            return;
        }
        //include
        solve(nums,i+2,sum+nums[i],maxSum);
        //exclude
        solve(nums,i+1,sum,maxSum);
    }
    int rob(vector<int>& nums) {
       int i=0;
       //vector<int>money; storing in separate vector, causes memory limit 
       int sum=0;
       int maxSum=INT_MIN;
       solve(nums,i,sum,maxSum);
       //return *max_element(money.begin(),money.end());
       return maxSum;
    }
};


//Tutorial Approach
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
