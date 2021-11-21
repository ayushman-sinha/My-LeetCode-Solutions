// https://leetcode.com/problems/break-a-palindrome

class Solution {
public:
    string breakPalindrome(string s) {
        if(s.length()==1)
            return "";
        int c=0;
        string str=s;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='a')
            {
                s[i]='a';    
                string w=s;
                reverse(w.begin(),w.end());
                if(w==s)
                {
                    s[i]=str[i];
                }
                else
                {
                c=1;
                break;
                }
            }
            
        }
        if(c==0)
            s[s.length()-1]='b';
        return s;
    }
};