// https://leetcode.com/problems/valid-palindrome-ii

class Solution {
public:
    bool validPalindrome(string s) {
      for(int i=0;i<s.length();i++)
      {
          string a="",b="";
             if(i==0)
             {
                 a=s.substr(1);
                 string tmp=a;
                   reverse(a.begin(),a.end());
                 if(tmp==a)
                     return true;
                 continue;
              }
          if(i==s.length()-1)
          {
              a=s.substr(0,s.length()-1);
              string tmp=a;
                   reverse(a.begin(),a.end());
              if(tmp==a)
                     return true;
            return false;
          }
              a=s.substr(0,i);
             b=s.substr(i+1);
          string str=a+b;
        cout<<a<<" "<<b;
          reverse(str.begin(),str.end());
          if(str==a+b)
              return true;
      }
        return false;
    }
};