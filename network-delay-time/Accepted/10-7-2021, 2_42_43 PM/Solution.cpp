// https://leetcode.com/problems/network-delay-time

class Solution {
public:
    int v;
    list<pair<int,int>>*adj;
    void addEdge(int p,int q,int wt)
    {
        adj[p].push_back(make_pair(q,wt));
       
    }
   int dijkstra(int src)
    {
        set<pair<int,int>>ds;
        vector<int>dist(v,9999);
        ds.insert(make_pair(0,src));
        dist[src]=0;
        while(!ds.empty())
        {
            pair<int,int> tmp=*(ds.begin());
            ds.erase(ds.begin());
            int u=tmp.second;
          
            for(auto i=adj[u].begin();i!=adj[u].end();i++)
            {
                
                int V=(*i).first;
                int wt=(*i).second;
                if(dist[V]>dist[u]+wt)
                {
                     if (dist[V] !=9999)
                    ds.erase(ds.find(make_pair(dist[V], V)));
                    dist[V] = dist[u] + wt;
                         ds.insert(make_pair(dist[V], V));
                }
            }
        }
     int ans=INT_MIN;
       for(int i=0;i<v;i++)
       {
           if(dist[i]==9999)
               return -1;
           ans=max(ans,dist[i]);
       }
        return ans;
        
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        v=n;
        adj=new list<pair<int,int>>[v];
        for(int i=0;i<times.size();i++)    
      addEdge(times[i][0]-1,times[i][1]-1,times[i][2]);
     
        return   dijkstra(k-1);
        }
};