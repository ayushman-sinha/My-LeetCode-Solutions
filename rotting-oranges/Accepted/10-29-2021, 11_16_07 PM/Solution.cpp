// https://leetcode.com/problems/rotting-oranges

class Solution {
public:    
        int orangesRotting(vector<vector<int>>& grid) {
           queue<pair<int,int>>q;// queue to store rowXcolumn of rotten oranges
          int fresh=0;//stores the number of fresh oranges
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[i].size();j++)
                {
                    if(grid[i][j]==2)
                    {
                        q.push({i,j});
                        
                    }
                     if(grid[i][j]==1)                    
                         fresh++;
                     
                }
            }
            int c=0;
            /*Performing Breadth FIrst Search in all four Directions of rotten oranges if it contains a FRESH orange
            THe boolean f is to ensure whether a fresh orange is encountered in any one side.
            Also the number of fresh oranges are kept decreasing as each of them are turning rotten*/
            while(!q.empty())
            {
             int siz=q.size(); bool f=false;
                while(siz--)
                {
                int a=q.front().first;
                int b=q.front().second;
                q.pop();
               //After an orange is ROTTEN we push it into our queue
                if(a>0&&grid[a-1][b]==1)
                {
                    grid[a-1][b]=2;
                    q.push({a-1,b});
                   f=true;
                    fresh--;
                   
                }
                if(a<grid.size()-1&&grid[a+1][b]==1)
                {
                    grid[a+1][b]=2;
                    q.push({a+1,b});
                   f=true;
                     fresh--;
                   
                }
                  if(b>0&&grid[a][b-1]==1)
                {
                    grid[a][b-1]=2;
                    q.push({a,b-1});
                   f=true;
                     fresh--;
                }
                 if(b<grid[0].size()-1&&grid[a][b+1]==1)
                {
                    grid[a][b+1]=2;
                    q.push({a,b+1});
                  f=true;
                    fresh--; 
                }
                    //c=f?c+1:c;
                }
                
             if(f)//If a fresh orange is encountered in even one side of the rotten orange we increment our counter which is the time taken
               c++;
            }
           // cout<<c<<" "<<rot<<"\n";
          if(fresh!=0)//if any fresh oranges remain we return -1
              return -1;
           
            return c;
    }
};