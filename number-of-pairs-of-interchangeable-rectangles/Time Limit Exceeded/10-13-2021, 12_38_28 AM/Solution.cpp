// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int c=0;
        for(int i=0;i<rectangles.size()-1;i++)
        {
            double f=(rectangles[i][0]/(double)rectangles[i][1]);
             //cout<<f<<" ";
            for(int j=i+1;j<rectangles.size();j++)
            {
                double k=(rectangles[j][0]/(double)rectangles[j][1]);
               
                if(f==k)
                    c++;
            }
        }
        return c;
    }
};