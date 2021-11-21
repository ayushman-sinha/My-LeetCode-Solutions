// https://leetcode.com/problems/maximum-difference-between-increasing-elements

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        long int max1=LONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]-nums[i]>0)
                {
                      if(nums[j]-nums[i]>=max1)
                      {
                          max1=nums[j]-nums[i];
                      }
                }
            }
         }
        if(max1==LONG_MIN)
            return -1;
        return max1;
        
    }
};