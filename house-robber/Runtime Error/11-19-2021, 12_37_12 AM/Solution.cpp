// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rob(vector<int>& nums) {
      int dp[102];
        for(int i=0;i<102;i++)
            dp[i]=0;
       // dp[0]=nums[0];
   
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
          
        }
        
        return dp[nums.size()-1];
       
    }
};