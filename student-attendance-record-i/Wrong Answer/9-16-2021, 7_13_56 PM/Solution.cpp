// https://leetcode.com/problems/student-attendance-record-i

class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
                a++;
            if(a>2)
                return false;
           if(i<s.length()-2)
           {
               if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
                   return false;
           }
        }
        return true;
    }
};