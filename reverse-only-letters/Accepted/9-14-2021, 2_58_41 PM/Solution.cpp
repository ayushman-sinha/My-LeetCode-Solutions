// https://leetcode.com/problems/reverse-only-letters

class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int a=0;int b=s.length()-1;
        while(a<b)
        {
            if(isalpha(s[a])&&isalpha(s[b]))
            {
               swap(s[a],s[b]);
                a++;
                b--;
            }
            else if(isalpha(s[a])&&!isalpha(s[b]))
            {
                b--;
            }
            else if(!isalpha(s[a])&&isalpha(s[b]))
            {
               a++;
            }
            else
            {
                a++;
                b--;
            }
         }
        return s;
    }
};