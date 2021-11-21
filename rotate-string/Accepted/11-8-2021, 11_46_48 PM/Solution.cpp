// https://leetcode.com/problems/rotate-string

class Solution {
public:
    bool rotateString(string s, string goal) {
        stack<char>stk;
        for(int i=0;i<s.length();i++)
            stk.push(s[i]);
        int j=s.length()-2;
        string a="";
        while(j>=0&&!stk.empty())
        {
            a=stk.top()+a;
           if(a+s.substr(0,j+1)==goal)
               return true;
            stk.pop();
            j--;
            
        }
        return false;
    }
};