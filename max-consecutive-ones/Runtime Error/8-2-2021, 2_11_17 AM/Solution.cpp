// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();
        int max1=0;
        for(int i=0;i<size;i++)
        {
            int c=0;
            if(nums[i]==1)
            {
            while(nums[i]==1)
            {
                c++;
                i++;
            }
            max1=max(c,max1);
           i--;
            }
        }
        return max1;
    }
};