// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
    
        if(s=="")
            return false;
            string str="";
        string rev="";
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                char ch=s[i];
                if(isalpha(s[i]))
                 ch=tolower(s[i]);
                str=str+ch;
                rev=ch+rev;
            }
        }
       
        if(rev==str)
            return true;
        else
            return false;
    }
};