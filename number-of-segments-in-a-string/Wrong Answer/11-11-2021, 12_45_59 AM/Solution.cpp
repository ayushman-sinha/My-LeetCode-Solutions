// https://leetcode.com/problems/number-of-segments-in-a-string

class Solution {
public:
    int countSegments(string s) {
        if(s.empty())
            return 0;
       s=s+" ";
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                c++;
        }
        return c;
    }
};