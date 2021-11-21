// https://leetcode.com/problems/robot-return-to-origin

class Solution {
public:
    bool judgeCircle(string moves) {
        /*
        +1 for up -1 for down (sum1)
        +1 for left -1 for right (sum2)
        */
        bool f;int sum1=0;int sum2=0;
        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='U')
                sum1+=1;
            else if(moves[i]=='D')
                sum1-=1;
            else if(moves[i]=='L')
                sum2-=1;
            else if(moves[i]=='R')
                sum2+=1;
        }
      
        if(sum1==0&&sum2==0)
            return true;
        else
            return false;
    }
};