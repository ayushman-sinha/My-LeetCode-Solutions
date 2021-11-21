// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
int gl=INT_MIN;
        int lo=1;
        for(int i=0;i<nums.size();i++)
        {
            lo=max(nums[i],nums[i]*lo);
            if(lo>gl)
                gl=lo;
        }
        return gl;
        
    }
};