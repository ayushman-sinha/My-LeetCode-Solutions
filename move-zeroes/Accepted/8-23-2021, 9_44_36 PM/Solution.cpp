// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(auto i=nums.begin();i<nums.end();i++)
        {
            if(*i==0)
            {
                nums.erase(i);                
              c++;
                i--;
               
            }
        }
        for(int i=0;i<c;i++)
            nums.push_back(0);
    }
};