// https://leetcode.com/problems/assign-cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        long int c=0;
        int j=0;
           sort(s.begin(),s.end());
        for(int i=0;i<g.size();i++)
        {
          for(j=0;j<s.size();j++)
          {
              if(s[j]!=-1&&g[i]<=s[j])
              {
                  c++;
              s[j]=-1;
                  break;
              }
          }
        }
        return c;
    }
};