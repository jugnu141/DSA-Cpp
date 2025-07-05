//https://leetcode.com/problems/find-pivot-index/
//Brute Force Approach--O(n^2)
//Optimized Approach--O(n)

class Solution {
public:
    int MyBruteForce(vector<int>& nums)
    {
        int n=nums.size();
        for(int i=0; i<nums.size(); i++)
        {
            int leftsum=0;
           int rightsum=0;
            if(i==0)
            {
                leftsum=0;
                rightsum=accumulate(nums.begin()+i+1,nums.end(),0);
                if(leftsum==rightsum)
                    return i;
            }
            if(i==n-1)
            {
                rightsum=0;
                leftsum=accumulate(nums.begin(),nums.begin()+i,0);
                if(leftsum==rightsum)
                    return i;
            }
            leftsum=accumulate(nums.begin(),nums.begin()+i,0);
            rightsum=accumulate(nums.begin()+i+1,nums.end(),0);
            if(leftsum==rightsum)
                return i;
        }
        return -1;
    }
    int Optimized(vector<int>& nums)
    {
        //Accumulate function has-- T.C- O(n)
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (left_sum == total_sum - left_sum - nums[i]) {
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
       // return MyBruteForce(nums);
        //T.C : O(n^2) due to multiple accumulate function
        return Optimized(nums); //T.C O(n)


    }
};
