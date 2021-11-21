// https://leetcode.com/problems/jump-game-ii

class Solution {
public:
    int jump(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                c++;
            }
            else
            {
                c++;
                i+=nums[i];
            }
        }
        return c;
    }
};