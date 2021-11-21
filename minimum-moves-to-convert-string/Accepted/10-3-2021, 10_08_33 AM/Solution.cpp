// https://leetcode.com/problems/minimum-moves-to-convert-string

class Solution {
public:
    int minimumMoves(string s) {
        int moves=0;
        for(int i=0;i<s.length();i++)
        {
            int j=i;int c=0;bool b=false;
            if(s[i]!='O')
            {
            while(c!=3&&j<s.length())
            {
                if(s[j]=='X')
                {
                    s[j]='O';        
                    b=true;
                }
             j++;c++;
            }
            if(b)
         moves++; 
            }
          }
        return moves;
        
    }
};