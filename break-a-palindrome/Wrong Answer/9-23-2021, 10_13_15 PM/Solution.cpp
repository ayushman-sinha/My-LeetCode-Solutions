// https://leetcode.com/problems/break-a-palindrome

class Solution {
public:
    string breakPalindrome(string s) {
        if(s.length()==1)
            return "";
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='a')
            {
                s[i]='a';
                c=1;
                break;
            }
            
        }
        if(c==0)
            s[s.length()-1]='b';
        return s;
    }
};