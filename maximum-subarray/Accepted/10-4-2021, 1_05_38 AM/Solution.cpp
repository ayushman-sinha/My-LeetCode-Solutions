// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int gl=INT_MIN;
        int loc=0;
        for(int i=0;i<nums.size();i++)
        {
            loc=max(nums[i],nums[i]+loc);
            if(loc>gl)
            gl=loc;
        }
        return gl;
    }
};