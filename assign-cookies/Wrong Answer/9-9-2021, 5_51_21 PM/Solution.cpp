// https://leetcode.com/problems/assign-cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        long int c=0;
        sort(g.begin(),g.end());int j=0;
           sort(s.begin(),s.end());
        for(int i=0;i<g.size();i++)
        {
            if(j==s.size())
                break;
            if(j<s.size()&&g[i]<=s[j])
            {
                c++;j++;
            }
        }
        return c;
    }
};