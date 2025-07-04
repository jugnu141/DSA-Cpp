//https://www.geeksforgeeks.org/problems/painting-the-fence3727/1

//TLE- due to pure Recursion, but logic and answer is correct
// Optimized by DP
class Solution {
  public:
    int solve(int n,int k)
    {
        //2 base case
        if(n==1)
            return k;  // k ways
        if(n==2)
            return (k + k*(k-1));
            // k for same, k*(k-1) for different, adding both
            
        return (k-1)*(solve(n-1,k) + solve(n-2,k));
    }
  
    int countWays(int n, int k) {
        // code here
        return solve(n,k);
    }
};
