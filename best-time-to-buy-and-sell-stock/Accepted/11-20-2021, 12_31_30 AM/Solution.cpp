// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int dp[prices.size()+2];
        int maxi=INT_MIN;
        dp[0]=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]-dp[i-1]>0)
            {
                dp[i]=dp[i-1];
                maxi=max(maxi,prices[i]-dp[i-1]);
                
            }
           else
               dp[i]=prices[i];
        }
        if(maxi==INT_MIN)
            return 0;
        return maxi;
   
       
    }
};