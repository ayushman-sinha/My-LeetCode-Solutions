// https://leetcode.com/problems/construct-the-rectangle

class Solution {
public:
    vector<int> constructRectangle(int area) {
     int l=0;int w=INT_MAX; int dif=INT_MAX;
        for(int i=1;i<=sqrt(area);i++)
        {
           if(area%i==0)
           {
               int di=(area/i)-i;
               if(di<=dif)
               {
                   l=area/i;
                   w=i;
                   dif=l-w;
               }
           }
        }
        vector<int>ans;
        ans.push_back(l);
          ans.push_back(w);
        return ans;
    }
};