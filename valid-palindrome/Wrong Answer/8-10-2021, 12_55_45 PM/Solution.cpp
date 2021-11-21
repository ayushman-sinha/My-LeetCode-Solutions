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
            if(isalpha(s[i]))
            {
                char ch=tolower(s[i]);
                str=str+ch;
                rev=ch+rev;
            }
        }
        if(str.length()==1&&rev.length()==1)
            return false;
        if(rev==str)
            return true;
        else
            return false;
    }
};