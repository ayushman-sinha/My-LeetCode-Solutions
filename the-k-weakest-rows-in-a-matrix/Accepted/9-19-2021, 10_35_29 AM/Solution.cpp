// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<pair<int,int>>one;
        for(int i=0;i<mat.size();i++)
        {
            int c=0;
            
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                    c++;
            }          
            one.push_back(make_pair(c,i));
        }
        sort(one.begin(),one.end());
        vector<int>ans;
        for(int i=0;i<k;i++)        
            ans.push_back(one[i].second);        
        return ans;
    }
};