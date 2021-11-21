// https://leetcode.com/problems/assign-cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        long int c=0;
        sort(g.begin(),g.end());
           sort(s.begin(),s.end());
        for(int i=0;i<g.size();i++)
        {
            if(s.empty())
                break;
            if(!s.empty()&&g[i]<=s[1])
                c++;
        }
        return c;
    }
};