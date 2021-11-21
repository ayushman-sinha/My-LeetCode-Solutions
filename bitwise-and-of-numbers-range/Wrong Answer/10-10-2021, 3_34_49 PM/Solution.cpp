// https://leetcode.com/problems/bitwise-and-of-numbers-range

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(right-left<2)
            return left&right;
        long int ans=left;
        for(int i=left+1;i<right;i++)
        {
            ans&=i;
        }
        return ans;
        
    }
};