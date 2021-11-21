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
      
        int a=0;
        int b=str.length()-1;
        int c1=0;
        while(a<=b)
        {
            char ch1=str[a];
            char ch2=str[b];
            if(ch1!=ch2)
            {
                c1=1;
                break;
            }
            a++;
            b--;
        }
        if(c1==1)
            return false;
        else
            return true;
        /*
        if(rev==str)
            return true;
        else
            return false;
            */
    }
};