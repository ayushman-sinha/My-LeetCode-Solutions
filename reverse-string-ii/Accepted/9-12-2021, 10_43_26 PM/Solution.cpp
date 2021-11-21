// https://leetcode.com/problems/reverse-string-ii

class Solution {
public:
    string reverseStr(string s, int k) {   
        for(int i=0;i<s.length();i+=2*k)
        {
            if(s.length()-i<k)//In case there are fewer than 'k' characters left
                reverse(s.begin()+i,s.end());
            else
          reverse(s.begin()+i,s.begin()+i+k);//Normal reversal
        }
        return s;
    }
};