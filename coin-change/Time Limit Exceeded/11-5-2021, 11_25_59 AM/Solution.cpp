// https://leetcode.com/problems/coin-change

class Solution {
public:
    int ans=INT_MAX;
    void calc(vector<int>& coins,int i,int amount,int sum,int c)
    {
        if(sum>amount||i>=coins.size())
            return;
        if(sum==amount)
        {
            ans=min(ans,c);
            return;
        }
        sum+=coins[i];
        //cout<<sum<<" ";
        calc(coins,i,amount,sum,c+1);
       c=c-1;sum-=coins[i];
          calc(coins,i+1,amount,sum,c+1);
            
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end(),greater<int>());
        calc(coins,0,amount,0,0);
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};