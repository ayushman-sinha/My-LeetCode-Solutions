// https://leetcode.com/problems/reverse-words-in-a-string-iii

class Solution {
public:
    string reverseWords(string s) {
        int a=0;
        int b=s.length()-1;
        string ans1="",ans2="";    
        string w1="",w2="";
        s+=' ';
        int len=s.length();
        while(ans1.length()+ans2.length()<len)
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
            if(s[b]!=' ')
            {
                w2=w2+s[b];
               b--;
            }
             if(s[b]==' ')
           {
                ans2=w2+s[b]+ans2;
                b--;
                w2="";              
            } 
        }
     ans2.erase(ans2.size()-1,1);
        return ans1+ans2;
    }
};