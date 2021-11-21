// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();
        int max1=0; int c=0;
        for(int i=0;i<size;i++)
        {
           
            if(nums[i]==1)
            {          
            
             c++;
            }
            if(nums[i]==0)
            {
                
                max1=max(c,max1);
                c=0;
            }
        }
        return max1;
    }
};