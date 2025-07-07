//https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

//Done By Myself
class Solution {
  public:
    int MapMethod(vector<int> &nums)
    {
        unordered_map<int,int>check;
        int ans=INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            check[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(check[nums[i]] > 1)
            {
                ans=i+1;
                break; //loop break, bcz we want first repeating element
            }
        }
        
        if(ans == INT_MAX)
            return -1;
            
        return ans;
    }
  
    int firstRepeated(vector<int> &arr) {
        return MapMethod(arr);
        
    }
};
