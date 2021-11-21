// https://leetcode.com/problems/stone-game-ix

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
     vector<int>ar(3,0);
        for(int i=0;i<stones.size();i++)
        {
            ar[stones[i]%3]++;
        }
        if(ar[0]%2!=0)
        {
            if(abs(ar[1]-ar[2]>=3))
                return true;
            else
                return false;
        }
        else
        {
            if(ar[2]==0||ar[1]==0)
                return false;
            else
                return true;
        }
    }
};