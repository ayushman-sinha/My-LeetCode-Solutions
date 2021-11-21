// https://leetcode.com/problems/robot-return-to-origin

class Solution {
public:
    bool judgeCircle(string moves) {
        /*
        +1 for up -1 for down
        +2 for left -2 for right
        */
        bool f;int sum=0;
        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='U')
                sum+=1;
            else if(moves[i]=='D')
                sum-=1;
            else if(moves[i]=='L')
                sum-=2;
            else if(moves[i]=='R')
                sum+=2;
            
        }
        if(sum==0)
            return true;
        else
            return false;
    }
};