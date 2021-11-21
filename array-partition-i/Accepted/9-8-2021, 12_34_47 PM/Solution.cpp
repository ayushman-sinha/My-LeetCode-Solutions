// https://leetcode.com/problems/array-partition-i

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
       
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2)
        {
            sum+=min(nums[i],nums[i+1]);
        }
        return sum;
    }
};