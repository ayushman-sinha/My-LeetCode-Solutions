// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles

class Solution {
public:

    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
      unordered_map<double,int>ar;long long int count=0;
        for(int i=0;i<rectangles.size();i++)
        {
            double rat=rectangles[i][0]/(double)rectangles[i][1];
            ar[rat]++;
        }
            for(auto i=ar.begin();i!=ar.end();i++)
            {
                int tmp=i->second;
                count+=(tmp*(tmp-1)/2);
            }
          return count;
        }
      
    
};