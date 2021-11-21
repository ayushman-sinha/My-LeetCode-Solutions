// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
       if(s[s.length()-1]!=' ')
      s+=" ";
        string w="";string tmp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                tmp+=s[i];
            }
            else if(i<s.length()&&s[i]==' '&&s[i+1]!=' ')
            {
                w=tmp+" "+ w;
                tmp="";
            }
        }
      
        int k= w.find_last_not_of(' ');
        w=w.substr(0,k+1);
        return w;
    }
};