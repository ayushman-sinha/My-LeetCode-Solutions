// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        
        for(int i=0;i<intervals.size()-1;i++)
        {
            int j=i+1;
           while(true)
           {
                
               if(j<intervals.size()&&intervals[i][1]>=intervals[j][0])
               {
                   j++;
               }
               else
               {
                   vector<int>tmp;
                   if(j==i+1)
                   {
                        tmp.push_back(intervals[i][0]);
                  tmp.push_back(intervals[i][1]);
                   ans.push_back(tmp);
                  if(j==intervals.size()-1)
                   {
                       vector<int>tmp1;
                       tmp1.push_back(intervals[intervals.size()-1][0]);
                  tmp1.push_back(intervals[intervals.size()-1][1]);
                   ans.push_back(tmp1);
                   }
                      break;
                   }
                   tmp.push_back(intervals[i][0]);
                  tmp.push_back(intervals[j-1][1]);
                   ans.push_back(tmp);
                   i=j-1;  
                   if(j==intervals.size()-1)
                   {
                       vector<int>tmp1;
                       tmp1.push_back(intervals[intervals.size()-1][0]);
                  tmp1.push_back(intervals[intervals.size()-1][1]);
                   ans.push_back(tmp1);
                   }
                   break;
                }
               
           }
        }
        return ans;
    }
};