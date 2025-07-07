//https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int SortingMethod(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
                ans = nums[i];
        }
        return ans;
    }

    int MapMethod(vector<int>& nums)
    {
        unordered_map<int,bool>check;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(check[nums[i]] == true)
                ans=nums[i];
            check[nums[i]]=true;
        }
        return ans;
    }

    int VisitedMethod(vector<int>& nums)
    {
        int ans=-1;
        for(int i=0; i<nums.size(); i++)
        {
            int index=abs(nums[i]); //bcz we made some elements negative
            if(nums[index] < 0) //already visited?
            {
                ans=index;
            }
            else
                nums[index] *= -1; //multiplied with -1
        }
        return ans;
    }

     int PositioningMethod(vector<int>& nums)
     {
        while(nums[0] != nums[nums[0]])
            swap(nums[0], nums[nums[0]]);
        
        return nums[0]; //Equal, means duplicate element
     }

     

    int findDuplicate(vector<int>& nums) {
       //return SortingMethod(nums); // T.C O(nlogn)
       //return MapMethod(nums); //T.C O(n), S.C: O(n)

       //return VisitedMethod(nums); //T.C: O(n), S.C: O(1)
        //This method modifies the array

        //return PositioningMethod(nums); //T.C: O(n), S.C: O(1)
            //This Also Modifies Array

        // Binary Search Method- Doesnt modify Array
        return BinarSearch(nums); //
        //Do Later
    }
};
