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
    void dfs(int s,vector<bool>&visited,int start,int end)
    {
       visited[s]=true;
         if(s==start)
                        f1=true;
                       
            for(auto i =ar[s].begin();i!=ar[s].end();i++)
            {
                if(visited[*i]==false)
                {
                   
                    if(*i==end)
                        f2=true;
                    if(f1&&f2)
                        return;
                    dfs(*i,visited,start,end);
                }
            }
        
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
            dfs(i,visited,start,end);
            if(f1&&f2)
                return true;
            f1=false;
            f2=false;
        }
        return false;
     
        
    }
};