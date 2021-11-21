// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
      int dp[nums.size()+1];
        dp[0]=nums[0];
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i]=max(nums[i]+dp[i-1],nums[i]);      
            maxi=max(maxi,dp[i]);          
        }
     
        /*
        for(int i=0;i<=k;i++)
            cout<<dp[i]<<" ";
        cout<<"\n";
        */
        return maxi;
    }
};