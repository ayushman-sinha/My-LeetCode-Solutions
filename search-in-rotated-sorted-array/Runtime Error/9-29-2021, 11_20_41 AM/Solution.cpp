// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
public:
    int search(vector<int>& nums, int target) {
      
       
            
        rotate(nums.begin(),nums.begin()+target,nums.end());
        auto i=find(nums.begin(),nums.end(),target);
        if(i==nums.end())
            return -1;
        return (i-nums.begin());
    }
};