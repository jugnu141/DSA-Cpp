//https://leetcode.com/problems/maximum-average-subarray-i/description/


class Solution {
public:
    double BruteForce(vector<int>& nums, int &k)
    {
        double ans=INT_MIN;
        int i=0;
        int j=k-1;
        while(j < nums.size())
        {
            double sum=0;
            for(int s=i; s<=j; s++)
            {
            sum += nums[s];
            }
            ans=max(ans,sum);
            i++;
            j++;
        }
        return ans /k;
    }
    double SlidingWindow(vector<int>& nums, int &k)
    {
        int i=0;
        int j=k-1;
        double sum=0;
        for(int s=i; s<=j; s++)
             sum += nums[s];
        double maxSum=sum;
        j++;
        while(j < nums.size())
        {
            sum -= nums[i++];
            sum +=nums[j++];
            maxSum=max(maxSum,sum);
        }
        return maxSum/k;
    }


    double findMaxAverage(vector<int>& nums, int k) {
        //return BruteForce(nums,k); T.C: O(n^2) TLE
       return SlidingWindow(nums,k); //T.C: O(n)

    }
};
