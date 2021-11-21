// https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters

class Solution {
public:
    string modifyString(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(i==0&&s[i]=='?')//First Index
            {
                if(s[i+1]=='?')
                    s[i]='a';
                else
                {
                    if(s[i+1]=='z')
                        s[i]='y';
                    else
                        s[i]=s[i]+1;
                }
             }
            else if(i==s.length()-1&&s[i]=='?')//Last Index
            {
                if(s[i-1]=='a')
                    s[i]='z';
                else
                    s[i]=s[i-1]-1;
            }
            else if(s[i]=='?')
            {
                  if(s[i+1]=='?')
                  {
                      if(s[i-1]=='z')
                          s[i]='a';
                      else
                          s[i]=s[i-1]+1;
                  }
                else
                {
                      if(s[i-1]=='z'&&s[i+1]=='z')
                      {
                          s[i]='a';
                      }
                    else if(s[i-1]>s[i+1])
                    {
                        s[i]=s[i-1]+1;
                     }
                    else if(s[i+1]>s[i-1])
                    {
                        s[i]=s[i+1]+1;
                    }
                    else
                        s[i]=s[i-1]+1;
                          
                }
            }
           }
        return s;
    }
};