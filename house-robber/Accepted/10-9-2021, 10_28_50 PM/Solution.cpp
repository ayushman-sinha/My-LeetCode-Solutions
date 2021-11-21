// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rob(vector<int>& nums) {
     
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
                continue;
            if(i==1)
                nums[i]=max(nums[i],nums[i-1]);
            else
                nums[i]=max(nums[i-1],nums[i]+nums[i-2]);
        }
        if(nums.size()<2)
            return nums[0];
        return nums[nums.size()-1];
    }
};