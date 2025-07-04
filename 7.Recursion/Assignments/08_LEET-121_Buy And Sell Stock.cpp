//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    //By Recursion - in O(n) Time Complexity

    void solve(vector<int>& prices,int &maxprofit,int &minprice,int i)
    {
        //Base Case
        if(i>=prices.size())
            return;

        //1 case mai solve karunga,baaki recursion karega
        // if(prices[i] < minprice)
        //     minprice=prices[i];
        minprice=min(minprice,prices[i]);

        maxprofit=max(maxprofit,prices[i]-minprice);
        solve(prices,maxprofit,minprice,i+1);
    }

    int maxProfit(vector<int>& prices) {
        int i=0;
        int maxprofit=INT_MIN;
        int minprice=INT_MAX;
        solve(prices,maxprofit,minprice,i);
        if(maxprofit <= 0)
            return 0;
        else
            return maxprofit;

    }
};
