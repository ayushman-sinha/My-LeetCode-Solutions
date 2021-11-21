// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int a=0;
        int b=nums.size()-1;
        while(a<=b)
        {
            if(nums[a]<nums[b])
                return nums[a];
            int mid=(a+b)/2;
            if(nums[a]<nums[mid])
                a=mid+1;
            if(nums[a]>nums[mid])
                b=mid-1;
            
        }
        return nums[a];
    }
};