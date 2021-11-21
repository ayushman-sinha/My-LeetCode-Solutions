// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(auto i=nums.begin();i<nums.end();i++)
        {
            if(*i==0)
            {
                nums.erase(i);
                nums.push_back(0);
            }
        }
    }
};