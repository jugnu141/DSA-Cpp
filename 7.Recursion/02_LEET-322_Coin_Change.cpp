//LEET-322 https://leetcode.com/problems/coin-change/
//My Approach
//Tutorial Approach

//My Aprroach
class Solution {
public:
    void solve(vector<int>& coins,vector<int>&ans,int i,int amount,long long int sum,int a)
    {
        //base case
        if(sum==amount)
        {
            ans.push_back(a);
            return;
        }
        if(i>=coins.size() || sum>=amount )
            return;
        //include
        solve(coins,ans,i,amount,sum+coins[i],a+1);
        //exclude
        solve(coins,ans,i+1,amount,sum,a);
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int>ans;
        int i=0;
        long long int sum=0;
        int a=0;
        solve(coins,ans,i,amount,sum,a);
        if(ans.empty())
            return -1;
        return *min_element(ans.begin(),ans.end());

    }
};

//Tutorial Approach
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
