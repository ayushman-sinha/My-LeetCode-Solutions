// https://leetcode.com/problems/bitwise-and-of-numbers-range

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {        
        long int ans=left;
        for(int i=left+1;i<right;i++)        
            ans&=i;        
        ans&=right;
        return ans;        
    }
};