// https://leetcode.com/problems/reverse-string

class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty())
            return;
        int a=0;
        int b=s.size()-1;
        while(a<b)
        {
            char tmp=s[a];
            s[a]=s[b];
            s[b]=tmp;
            a++;
            b--;
        }
    }
};