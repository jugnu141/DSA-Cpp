//LEET-532 https://leetcode.com/problems/k-diff-pairs-in-an-array/
//Method-1, Brute Force Approach
//Method-2, Using Two pointer Approach
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0, j=1;
        set<pair<int,int>>ans;//to store unique pair
        while(j < nums.size()){
            int diff= nums[j]-nums[i];
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff > k)
                i++;
            else
                j++;
            if(i==j) j++;//to avoid pairing with self
            //like if k=0,
        }
        return ans.size();
    }
};

//Method-3 Binary Search
class Solution {
public:
    int binarySearch(vector<int>& arr,int s,int target)
    {
        int e=arr.size()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(arr[mid]==target)
                return 1; //target found
            else if( target > arr[mid])
                s=mid+1;
            else
                e=mid-1;
        }
        //reached here means not found
        return -1;
    }

    int findPairs(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        set<pair<int,int>>ans;
        for(int i=0; i<arr.size(); i++)
        {
            int a=binarySearch(arr, i+1, arr[i]+k) ;
            if(a != -1)
                ans.insert({arr[i],arr[i]+k});
        }
        return ans.size();
    }

};