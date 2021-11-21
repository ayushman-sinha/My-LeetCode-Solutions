// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        sort(s.begin(),s.end());
          sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i])
                return false;
        }
        return true;
    }
};