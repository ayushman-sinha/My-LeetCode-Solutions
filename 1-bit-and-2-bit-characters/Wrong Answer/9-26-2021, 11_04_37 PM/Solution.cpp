// https://leetcode.com/problems/1-bit-and-2-bit-characters

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        for(auto i=bits.begin();i<bits.end();i++)
        {
            if(*i==1)
                break;
            else{
                if(i==bits.end()-1)
                    break;
                bits.erase(i);
                i--;
            }
        }
         if(bits.size()==1&&bits[0]==0)
             return true;
         if(bits.size()==1&&bits[0]==1)
            return false;
         if(bits.size()%2!=0)
           return true;
    if(bits[bits.size()-2]==1||bits[bits.size()-1]==1)
        return false;
        return true;
        
        
    }
};