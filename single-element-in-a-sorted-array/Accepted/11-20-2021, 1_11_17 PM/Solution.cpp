// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int i=0;
        for( i=0;i<nums.size()-1;i++)
         if(nums[i]==nums[i+1])
             i++;
        else
            return nums[i];
        return nums[i];
    }
};