//LEET-322 https://leetcode.com/problems/coin-change/

class Solution {
public:
    int solve(vector<int>&coins,int amount)
    {
        //base case
        if(amount==0)
            //0 amount ke liye kitne coins
            return 0;
        int minCoins=INT_MAX;
    //har amount ke liye pure coins ke array par traverse kro
        for(int i=0; i<coins.size(); i++)
        {
            int coin=coins[i];
            //if coin value > amount, no need to call recursive function
            //if coin value <= amount,call recursive function
            if(coin <= amount)
            {
                //1 coin use hua,amount becomes amount-coin
                //baaki recursion sambhalega
                int recursionAns=solve(coins,amount-coin);
                //ho skta hai,recursionAns valid ho,ya fir invalid
                //invalid case --> recursionAns= INT_MAX
                //valid case --> recursionAns not equal to INT_MAX
                if(recursionAns != INT_MAX)
                {
                    //valid answer aaya hai
                    int coinsUsed=1 + recursionAns;
                    //kya above answer minimum hai
                    minCoins = min(minCoins,coinsUsed);
                }
            }
        }
        return minCoins;

    }

    int coinChange(vector<int>& coins, int amount) {
        int ans=solve(coins,amount);
        if(ans==INT_MAX)
            return -1;

        return ans;
    }
};
