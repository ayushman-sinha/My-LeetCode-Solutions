// https://leetcode.com/problems/jump-game-ii

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int c=1;
      int max1=nums[0];
        int cur=nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
            max1=max(max1,nums[i]+i);
            cur--;
            if(cur==0)
            {
                cur=max1-i;
                c++;
            }
            
        }
        return c;
    }
};