// https://leetcode.com/problems/minimum-path-sum

class Solution {
public:
    int min_sum=INT_MAX;
    void dfs(vector<vector<int>>&grid,int i,int j,int sum)
    {
         if(i==grid.size()-1&&j==grid[0].size()-1)
         {
             sum+=grid[i][j];
                min_sum=min(min_sum,sum);
             return;
         }
        if(i>=grid.size()||j>=grid[0].size()||grid[i][j]==-1)
        {
           
            return;
        }
        
       // cout<<sum<<" ";
        sum+=grid[i][j];
        int tmp=grid[i][j];
        grid[i][j]=-1;
        dfs(grid,i+1,j,sum);
        grid[i][j]=tmp;
        //sum-=grid[i][j];        
        dfs(grid,i,j+1,sum);
         grid[i][j]=tmp;
       // sum-=grid[i][j];
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        dfs(grid,0,0,0);
        return min_sum;
    }
};