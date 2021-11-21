// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
public:
    bool f1=false,f2=false;
    int v;int c=0;
    list<int>*ar;
    void addEdge(int u,int w)
    {
        ar[u].push_back(w);
       ar[w].push_back(u);
    }
    void dfs(int s,int start,int end)
    {
      
         if(s==start)
             f1=true;
        
          if(ar[s].back()==end)
          {
              f2=true;
          }
        return;
     
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        v=n;
        ar=new list<int>[n];
           vector<bool>visited(n,false);
        if(edges.empty())
        {
            if(start==0&&end==0)
                return true;
        }
        for(int i=0;i<edges.size();i++)
        {
            addEdge(edges[i][0],edges[i][1]);
        }
        for(int i=0;i<n;i++)
        {
            dfs(i,start,end);
            if(f1&&f2)
                return true;
            f1=false;
            f2=false;
          
        }
        return false;
     
        
    }
};