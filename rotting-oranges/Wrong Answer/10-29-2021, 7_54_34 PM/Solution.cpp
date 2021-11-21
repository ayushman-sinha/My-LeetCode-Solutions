// https://leetcode.com/problems/rotting-oranges

class Solution {
public:    
        int orangesRotting(vector<vector<int>>& grid) {
           queue<pair<int,int>>q;
            int rot=0;
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[i].size();j++)
                {
                    if(grid[i][j]==2)
                    {
                        q.push({i,j});
                        rot++;
                    }
                }
            }
            int c=0;
            while(!q.empty())
            {
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
                bool f=false;
                if(a>0&&grid[a-1][b]==1)
                {
                    grid[a-1][b]=2;
                    q.push({a-1,b});
                   f=true;
                }
                if(a<grid.size()-1&&grid[a+1][b]==1)
                {
                    grid[a+1][b]=2;
                    q.push({a+1,b});
                   f=true;
                }
                  if(b>0&&grid[a][b-1]==1)
                {
                    grid[a][b-1]=2;
                    q.push({a,b-1});
                   f=true;
                }
                 if(b<grid[0].size()-1&&grid[a][b+1]==1)
                {
                    grid[a][b+1]=2;
                    q.push({a,b+1});
                  f=true;
                }
                if(f)
                    c++;
            }
            cout<<c<<" "<<rot<<"\n";
           for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[i].size();j++)
                {
                    if(grid[i][j]==1)
                        return -1;
                    }
           }
            if(c-rot>0)
                return c-rot;
            return c;
    }
};