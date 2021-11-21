// https://leetcode.com/problems/number-of-ways-to-arrive-at-destination

class Solution {
public:
    int v;
    list<pair<int,int>>*ar;
    void addEdge(int p,int q,int wt)
    {
        ar[p].push_back(make_pair(q,wt));
        ar[q].push_back(make_pair(p,wt));
    }
   int dijkstra(int src,int dest)
    {
        long int mod=1e9+7;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(v,INT_MAX);
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
            bool b=false;
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
       /*
        for(int i=0;i<dist.size();i++)        
            cout<<ways[i]<<" ";        
       */
       return ways[v-1];
    }
    int countPaths(int n, vector<vector<int>>& roads) {
        v=n;
        ar=new list<pair<int,int>>[n];
        for(int i=0;i<roads.size();i++)
        {
            addEdge(roads[i][0],roads[i][1],roads[i][2]);
        }
      
        return   dijkstra(0,n-1);
    }
};