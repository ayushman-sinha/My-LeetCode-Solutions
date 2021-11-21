// https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>a;
        stack<char>b;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
               a.push(s[i]);
            else
            {
                if(!a.empty())
                   a.pop();
            }
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
               b.push(t[i]);
            else
            {
                if(!b.empty())
                   b.pop();
            }
        }
        if(a.size()!=b.size())
            return false;
        while(!a.empty())
        {
            if(a.top()!=b.top())
                return false;
            a.pop();
            b.pop();
        }
        return true;
    }
};