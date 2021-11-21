// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0; int c=0;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==1)                 
                    c++;                
             else if(nums[i]==0)
                {                   
                    max1=max(c,max1); 
                  c=0;
                }
        }
        max1=max(max1,c);
        return max1;
    }
};