// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
   void addEdge(int x,int y,vector<vector<int>>&gr)
   {
       gr[x][y]=1;
       gr[y][x]=1;
   }
    int check(vector<vector<int>>gr,int start)
    {
        int c=0;
        for(int i=0;i<gr.size();i++)
        {
            if(gr[start][i]==1)
                c++;
          }
        return c;
    }
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
         vector<vector<int>>gr(n+1,vector<int>(n+1,0));
        for(int i=0;i<n;i++)
        {
            addEdge(edges[i][0]-1,edges[i][1]-1,gr);
         }
          
          if(check(gr,0)>check(gr,1))
              return( edges[0][0]);
        else
        return (edges[0][1]);
    }
};