// https://leetcode.com/problems/hamming-distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=(x>>1)+(y>>1);
        return res;
        
    }
};