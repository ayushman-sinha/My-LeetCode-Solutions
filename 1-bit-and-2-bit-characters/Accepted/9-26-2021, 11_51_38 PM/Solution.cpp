// https://leetcode.com/problems/1-bit-and-2-bit-characters

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
     for(int i=0;i<bits.size();i++)
     {
         if(i==bits.size()-1)
             return true;
         if(bits[i]==0)
             continue;
         else
             i++;
     }
        return false;        
    }
};