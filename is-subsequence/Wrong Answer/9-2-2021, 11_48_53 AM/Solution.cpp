// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
      int prev=0;
        string st="";
        for(int i=0;i<s.length();i++)
        {
           for(int j=i;j<t.length();j++)
           {
               if(s[i]==t[j])
               {
                 st=st+s[i];  
               }
           }
        }
        if(st==s)
        return true;
        else
            return false;
    }
};