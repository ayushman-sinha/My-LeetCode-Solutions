// https://leetcode.com/problems/valid-palindrome-ii

class Solution {
public:
    bool isPal(string s,int ind)
    {
        string tmp1="";
        for(int i=0;i<s.length();i++)
        {
            if(i!=ind)
            tmp1+=s[i];
        }
        string tmp2=tmp1;
        reverse(tmp1.begin(),tmp1.end());
        if(tmp1==tmp2)
        return true;
      
            return false;
    }
    bool validPalindrome(string s) {
      int a=0;
        int b=s.length()-1;
        while(a<b)
        {
            if(s[a]!=s[b])
            {
                if(isPal(s,a)==true)
                    return true;
                if(isPal(s,b)==true)
                    return true;
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};