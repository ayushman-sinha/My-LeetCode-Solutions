// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int dp[nums.size()+2];
        dp[0]=nums[0];int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>dp[i-1]*nums[i])
            {
                dp[i]=nums[i];
                 maxi=max(nums[i],maxi);
            }
            dp[i]=max(dp[i-1]*nums[i],INT_MIN);
            maxi=max(dp[i-1]*nums[i],maxi);
        }
        if(maxi==INT_MIN)
            return nums[0];
        return maxi;
        
    }
};