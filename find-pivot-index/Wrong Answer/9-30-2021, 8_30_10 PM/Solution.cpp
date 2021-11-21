// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        sum-=nums[nums.size()-1];
        int sum1=nums[nums.size()-1];
        
        int i=nums.size()-2;
        while(i>=0)
        {
            sum-=nums[i];
            if(sum==sum1)
                return i;
            sum1+=nums[i];
            i--;
        }
        return -1;
    }
};