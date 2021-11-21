// https://leetcode.com/problems/stone-game-ix

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
     vector<int>ar(3,0);
        for(int i=0;i<stones.size();i++)
        {
            ar[stones[i]%3]++;
        }
        if(ar[1]==0&&ar[2])
            return false;
        if(ar[0]%2==0)
        {
            return(ar[1]>0&&ar[2]>0);
        }
        return abs(ar[1]-ar[2])>2;
    }
};