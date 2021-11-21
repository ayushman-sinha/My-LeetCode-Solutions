// https://leetcode.com/problems/best-sightseeing-pair

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int dp[values.size()+2];
        
        dp[0]=0+values[0];int maxi=INT_MIN;
        for(int i=1;i<values.size();i++)
        {
           dp[i]=max(dp[i-1],values[i]+i);
            maxi=max(dp[i-1]+values[i]-i,maxi);
        }
        return maxi;
    }
};