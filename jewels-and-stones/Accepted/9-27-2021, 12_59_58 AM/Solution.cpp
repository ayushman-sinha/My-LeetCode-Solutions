// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      
        int c=0;
        for(int j=0;j<jewels.length();j++)
        {
        for(int i=0;i<stones.length();i++)
        {
            if(jewels[j]==stones[i])
                c++;
            
        }
        
         
        }
        return c;
        
    }
};