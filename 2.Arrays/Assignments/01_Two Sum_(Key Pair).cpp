//https://www.geeksforgeeks.org/problems/key-pair5616/1
//Method-1 T.C: O(n^2)-- Nested Loop,Recursively---NOT Optimized----Run Time Error
//Method_2 T.c: O(n)---Mapping---Better Approach
//Method-3  T.C : O(nlogn)-----Two Pointer Approach

class Solution {
  public:
  
    bool twoPointerApproach(vector<int>& arr, int target)
    {
        // Two Pointer Approach --  Need Sorted Array
        // O(n log(n)) -> T.C
        sort(arr.begin(),arr.end()); // Sorting - O(n logn) 
        int n=arr.size();
        int l=0;
        int h=n-1;
        while(l < h)
        {
            int csum=arr[l] + arr[h];
            if(csum==target)
                return true;
            
            else if(csum > target) // Current Pair is too big
                h--; //Move High Index to left side
                
            else //Current Pair is too small
                l++; //Move Low Index to Higher side (Right Side)
        }
        return false;
    }
    bool MappingApproach(vector<int>& arr, int target)
    {
        // Use Mapping : For O(n) T.C
        unordered_map<int,bool>solve; //solve map is vacant initially
        for(int i=0; i<arr.size(); i++)
        {
            int complement=target-arr[i];
            if(solve.find(complement) != solve.end())
                //Complement key exist
                return true;
            solve[arr[i]]=true; //insert in map
        }
        return false;

      It ensures:

// You're not checking a number against itself (because arr[i] hasn't been inserted yet).
// Only allows valid pairs like:
// If you've already seen 3, and now see target - 3 = 2, you check solve[2].
//     }
  
    bool twoSum(vector<int>& arr, int target) {
        // O(n^2)-- Nested Loop-- NOT Optimized
        
        //return twoPointerApproach(arr,target);
       return MappingApproach(arr,target);
    }
};











