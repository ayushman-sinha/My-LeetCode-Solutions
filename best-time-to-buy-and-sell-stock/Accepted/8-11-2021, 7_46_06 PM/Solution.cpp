// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int b=prices.size()-1;
     int pro=0;
        int maxp=prices.at(b);
        while(b>=0)
        {
            pro=max(pro,maxp-prices.at(b));
            maxp=max(maxp,prices.at(b));
            b--;
        }
        return pro;
        
       
    }
};