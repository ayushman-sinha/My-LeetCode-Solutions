// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    string reverseWords(string s) {
        int a=0;
        int b=s.length()-1;
        string ans1="",ans2="";
        string w1="",w2="";
        s+=' ';
        while(a<=b)
        {
            if(s[a]!=' ')
            {
                w1=s[a]+w1;
                a++;
            }
            if(s[a]==' ')
            {
                ans1=ans1+w1+s[a];
                a++;
                w1="";
              
            }   
             
        }
      ans1.erase(ans1.size()-1,1);
        return ans1;
    }
};