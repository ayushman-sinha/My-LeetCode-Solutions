// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=0;
        int b=prices.size()-1;
        int minp=prices.at(0);
        int maxp=0;
        
        while(a<=b)
        {
            minp=min(minp,prices.at(a));
            maxp=max(maxp,prices.at(b));
            a++;
            b--;
        }
        if(maxp-minp<0)
            return 0;
        else
            return maxp-minp;
    }
};