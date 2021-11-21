// https://leetcode.com/problems/number-of-ways-to-arrive-at-destination

class Solution {
public:
    int v;
    list<pair<int,long int>>*ar;
    void addEdge(int p,int q,long int wt)
    {
        ar[p].push_back(make_pair(q,wt));
        ar[q].push_back(make_pair(p,wt));
    }
   int dijkstra(int src)
    {
        long int mod=1e9+7;
        priority_queue<pair<long int,int>,vector<pair<long int,int>>,greater<pair<long int,int>>>pq;
        vector<long int>dist(v,LONG_MAX);
        vector<bool>visited(v,false);
        pq.push(make_pair(0,src));
        dist[src]=0;
        
         vector<long>ways(v,0);      
        ways[0] = 1;
        
        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            if(visited[u]==true)
                continue;
            visited[u]=true;
           
            for(auto i=ar[u].begin();i!=ar[u].end();i++)
            {
                int wt=(*i).second;
                int s=(*i).first;
                if(dist[s]>wt+dist[u])
                {
                    dist[s]=wt+dist[u];
                   ways[s]=ways[u];
                    pq.push(make_pair(dist[s],s));
                }
                else if(dist[s]==wt+dist[u])
                {
                    ways[s]=(ways[s]+ways[u])%mod;
                }
                
            }
           
        }
       
        for(int i=0;i<ways.size();i++)        
            cout<<ways[i]<<" ";        
       
     return ways[v-1];
    }
    int countPaths(int n, vector<vector<int>>& roads) {
        v=n;
        ar=new list<pair<int,long int>>[n];
        for(int i=0;i<roads.size();i++)
        {
            addEdge(roads[i][0],roads[i][1],roads[i][2]);
        }
      
        return   dijkstra(0);
    }
};