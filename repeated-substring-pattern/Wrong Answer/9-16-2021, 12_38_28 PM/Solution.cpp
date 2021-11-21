// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
         string w1="";
        for(int i=0;i<s.length()/2;i++)
        {
            w1=w1+s[i];
           
            string w2="";
            for(int j=0;j<s.length()/2;j++)
            {
                w2=w2+w1;
                if(w2==s)
                    return true;
            }   
        }
        return false;
    }
};