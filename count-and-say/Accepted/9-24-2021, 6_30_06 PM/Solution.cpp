// https://leetcode.com/problems/count-and-say

class Solution {
public:
    string countAndSay(int n) {
       
       if(n==1)
           return "1";
        if(n==2)
            return "11";
        if(n==3)
            return "21";
         string s="21";
        for(int i=4;i<=n;i++)
        {
           int c=0;
            string w="";
            for(int j=0;j<s.length()-1;j++)
            {
            
                if(s[j]==s[j+1])
                {
                    c++;
                }
                else
                {
                    if(c!=0)
                   w=w+to_string(c+1)+s[j];
                    else
                        w=w+'1'+s[j];                    
                    c=0;
                }
                if(j==s.length()-2)
                {
                    if(c!=0)
                    {
                         w=w+to_string(c+1)+s[j];
                    }
                    else
                        w=w+'1'+s[j+1];                    
                 }                  
            }
            s=w;
        }
        return s;
    }
};