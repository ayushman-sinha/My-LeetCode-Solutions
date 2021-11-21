// https://leetcode.com/problems/best-sightseeing-pair

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int dp[values.size()+2];
        
        dp[0]=0;int maxi=INT_MIN;
        for(int i=1;i<values.size();i++)
        {
            int tmp=values[dp[i-1]]+values[i]+dp[i-1]-i;
            if(tmp>maxi)
            {
                  maxi=max(maxi,tmp);
                dp[i]=dp[i-1];
                //continue;
            }
               if(values[dp[i-1]]>values[i])
                   dp[i]=dp[i-1];
            else
                dp[i]=i;
          // dp[i]=max(dp[i-1],i); 
           
        }
        return maxi;
    }
};