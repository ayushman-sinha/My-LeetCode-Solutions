// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int dp[100000],k=0;
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i]=max(nums[i]+dp[i-1],nums[i-1]);
            k++;
        }
        return max(dp[k],nums[nums.size()-1]);
    }
};