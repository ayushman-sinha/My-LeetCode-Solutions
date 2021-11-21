// https://leetcode.com/problems/unique-paths

class Solution {
public:
    int c=0;
    void bfs(vector<vector<int>>&grid)
    {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        q.push({0,0});
        while(!q.empty())
        {
            int size=q.size();c++;
           
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                if(a==m||b==n)                                
                  continue;                
                if(a-1>=0&&b-1>=0)
                 grid[a][b]=grid[a-1][b]+grid[a][b-1];
                
              q.push({a+1,b});
                q.push({a,b+1});
            }
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>grid(m, vector<int>(n,1));
        bfs(grid);
        /*
        cout<<c<<"\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<grid[i][j]<<" ";
            cout<<"\n";
        }
        */
      return grid[m-1][n-1];
    }
};