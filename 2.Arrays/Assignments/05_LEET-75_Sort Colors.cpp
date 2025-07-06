//https://leetcode.com/problems/sort-colors/description/

class Solution {
public:
    void CountingMethod(vector<int>& nums)
    {
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                zero++;
            if(nums[i]==1)
                one++;
            if(nums[i]==2)
                two++;
        }
        int a=0;
        while(zero--)
          nums[a++]=0;
        while(one--)
            nums[a++]=1;
        while(two--)
            nums[a++]=2;
    }

    void ThreePointerApproach(vector<int>& nums)
    {
        int l=0,m=0,h=nums.size()-1;
        while( m <= h)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                m++;
                l++;
            }

            else if(nums[m]==1)
                m++;
            else
                {
                    swap(nums[m],nums[h]);
                    h--;
                }
        }
    }

    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end()); Dont Use
        //CountingMethod(nums);
        ThreePointerApproach(nums);
        //In Place Method


    }
};
