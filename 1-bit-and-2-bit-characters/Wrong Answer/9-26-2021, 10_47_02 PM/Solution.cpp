// https://leetcode.com/problems/1-bit-and-2-bit-characters

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       if(bits.size()%2!=0)
           return true;
    if(bits[bits.size()-2]==1||bits[bits.size()-1]==1)
        return false;
        return true;
        
        
    }
};