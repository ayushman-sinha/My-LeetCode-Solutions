// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();
        int max=0;
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
            if(c>max)
                max=c;
           if(c!=0)
               i=i-1;
            }
        }
        return max;
    }
};