// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        sort(jewels.begin(),jewels.end());
        sort(stones.begin(),stones.end());
        int c=0;int k=0;
        for(int j=0;j<jewels.length();j++)
        {
        for(int i=k;i<stones.length();i++)
        {
            if(jewels[j]==stones[i])
                c++;
            else 
            {
                k=i;
                break;
            }
        }
        
         
        }
        return c;
        
    }
};