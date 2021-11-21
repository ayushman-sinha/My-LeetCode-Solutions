// https://leetcode.com/problems/reshape-the-matrix

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>tmp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
                tmp.push_back(mat[i][j]);
        }
        vector<vector<int>>ans;int m=0;
        int a=mat.size();
        int b=mat[0].size();
        if(a*b!=c*r)
               return mat;
        for(int i=0;i<r;i++)
        {
            vector<int>ar;
            
            for(int j=0;j<c;j++)
            {
                ar.push_back(tmp[m]);
                m++;
            }
            ans.push_back(ar);
        }
         return ans;
    }
   
};