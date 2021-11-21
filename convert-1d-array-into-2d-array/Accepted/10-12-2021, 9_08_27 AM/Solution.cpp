// https://leetcode.com/problems/convert-1d-array-into-2d-array

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
        if(m*n>original.size()||m*n<original.size())
            return ans;
        int k=0;
        for(int i=0;i<m;i++)
        {
            vector<int>tmp;
            for(int j=0;j<n;j++)
            {
                tmp.push_back(original[k]);
                k++;
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};