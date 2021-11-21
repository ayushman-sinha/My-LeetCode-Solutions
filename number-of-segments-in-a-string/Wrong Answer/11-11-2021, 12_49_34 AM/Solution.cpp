// https://leetcode.com/problems/number-of-segments-in-a-string

class Solution {
public:
    int countSegments(string s) {
        
       s=s+" ";
        int c=0;int w=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(w!=0)
                c++;
            }
            else
            {
                w++;
            }
        }
        return c;
    }
};