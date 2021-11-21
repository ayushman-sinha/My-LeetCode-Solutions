// https://leetcode.com/problems/minimum-moves-to-convert-string

class Solution {
public:
    int minimumMoves(string s) {
        int moves=0;
        for(int i=0;i<s.length();i++)
        {
            int j=i;int c=0;
            while(c!=3&&s[i]!='O')
            {
                if(s[j]=='X')
                {
                    c++;
                    j++;
                }
                else
                    break;
            }
            if(c==1)
            {
                
                moves++;
            }
            else if(c==2)                
            {
                i+=1;
                moves++;
            }
             else if(c==3)                
            {
                i+=2;
                 moves++;
            }
                
          }
        return moves;
        
    }
};