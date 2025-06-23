//GFG Problem: https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
//Topic: Binary Search
//Logic: Search Space Pattern
class Solution {
  public:
    bool isPossibleSolution(vector<int>& a,int n,int k,int mid)
    {
        int timeSum=0;
        int c=1; //c represent current painter 
        for(int i=0; i<n; i++)
        {
            if(a[i] > mid) 
                return false;
            else if(a[i] + timeSum > mid)
            {
                c++;
                timeSum=a[i]; //reset
                if(c>k)
                    return false;
            }
            else
                timeSum += a[i];
        }
        return true;
        
    }
  
    int minTime(vector<int>& arr, int k) {
        //using search space pattern
        //Binary search will be applied in whole search space
        //0 to sum of all lengths
        int n=arr.size();
        int s=0;
        int e=accumulate(arr.begin(),arr.end(),0);
        //e is sum of all the length, total length
        int ans=-1;
        while(s <= e)
        {
            int mid=s+(e-s)/2;
            if(isPossibleSolution(arr,n,k,mid))
            {
                ans=mid; //store the possible solution
                e=mid-1; //to minimize the answer we move left in
                         //search space 
            }
            else 
                s=mid+1; 
        }
        return ans;
        
        // return minimum time
    }
};
