// https://leetcode.com/problems/unique-paths-iii

class Solution {
public:
    int c=1;   int ans=0;
    
    void dfs(vector<vector<int>>& grid,int i,int j,int c1)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==-1)
            return;
        if(grid[i][j]==2)
        {
            if(c1==c)
            ans++;
            return;
            
        }
        
        grid[i][j]=-1;
        dfs(grid,i+1,j,c1+1);
        dfs(grid,i,j+1,c1+1);
        dfs(grid,i-1,j,c1+1);
        dfs(grid,i,j-1,c1+1);
         grid[i][j]=0;
        
            
    }   
        
    int uniquePathsIII(vector<vector<int>>& grid) {
     
        int a,b;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    a=i;
                    b=j;                  
                }
                else if(grid[i][j]==0)
                    c++;
                  
            }
        }
      //  cout<<c;
    dfs(grid,a,b,0);

        return ans-1;
    }
};