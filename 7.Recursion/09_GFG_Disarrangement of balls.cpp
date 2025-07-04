//https://www.geeksforgeeks.org/problems/dearrangement-of-balls0918/1

// Step-by-step logic:
// Take the 1st ball: It cannot go into basket 1.

// So, suppose it goes into basket k (where k ≠ 1).

// Now, two cases arise:

// Case 1: Ball k goes to basket 1 → This reduces to D(n-2) problem.

// Case 2: Ball k does not go to basket 1 → This reduces to D(n-1) problem.


class Solution {
  public:
    int solve(int n)
    {
        //base case
        if(n==1)
            return 0;
        if(n==2)
            return 1;
            
        return (n-1)*(solve(n-1)+ solve(n-2));
        //way1- (n-1)*solve(n-2)
        //way-2 (n-2)*solve(n-1)
        //total ways = way1 + way2
    }
  
    int countDer(int n) {
        return solve(n);
    }
};
