// https://leetcode.com/problems/the-number-of-weak-characters-in-the-game

class Solution {
public:
  static  bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
     }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int c=0;
        int mx=0;
      sort(properties.begin(),properties.end(),comp);
         for (int i = properties.size() - 1; i >= 0; i--)
          {
             if(properties[i][1]<mx)
                 c++;
             mx=max(mx,properties[i][1]);
         }
     return c;
    }
};