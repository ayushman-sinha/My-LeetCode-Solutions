// https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>ar;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                ar.push_back(grid[i][j]);
            }
        }
        sort(ar.begin(),ar.end());
        if((ar[ar.size()-1]-ar[0])%x!=0)
            return -1;
        int c=0;
        c=(ar[ar.size()-1]-ar[0])/x;
        int a=1;
        int b=ar.size()-2;
        while(a<=b)
        {
            c+=((ar[b]-ar[a])/x);
            a++;
            b--;
        }
        return c;
    }
};