// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool>visited(nums.size(),false);
        
        int i=0;
        while(i<nums.size())
        {
            if(i==nums.size()-1)
                return true;
            if(nums[i]>=nums.size())
                return false;
            if(visited[i]==true)
                return false;
            visited[i]=true;
            i=nums[i]+i;
        }
        return false;
    }
};