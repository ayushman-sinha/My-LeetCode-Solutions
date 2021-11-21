// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        sort(nums.begin(),nums.end(),greater<int>());
        return ((nums[0]-1)*(nums[1]-1));
    }
};