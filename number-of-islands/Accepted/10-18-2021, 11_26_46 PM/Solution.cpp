// https://leetcode.com/problems/number-of-islands

class Solution {
public:
    int c=0;
    void dfs(vector<vector<char>>&grid,int r,int c)
    {
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]!='1')
            return;
       grid[r][c]='2';
        dfs(grid,r+1,c);
        dfs(grid,r-1,c);
        dfs(grid,r,c+1);
        dfs(grid,r,c-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    c++;
                }
            }
        }
        return c;
    }
};