// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int i=0,k=0;
        for( i=0;i<nums.size();i++)
        k^=nums[i];
        return k;
    }
};