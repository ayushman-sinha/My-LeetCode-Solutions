// https://leetcode.com/problems/path-with-maximum-probability

class Solution {
public:
    int v;
    list<pair<int,double>>*ar;
    void addEdge(int p,int q,double wt)
    {
        ar[p].push_back(make_pair(q,wt));
     ar[q].push_back(make_pair(p,wt));
    }
    double dijkstra(int start,int end)
    {
      vector<double>dist(v+1,-1.0);
        priority_queue<pair<double,int>>pq;
       pq.push(make_pair(1.0,start));
        dist[start]=1.0;
        vector<bool> visited(v, false);
        while(!pq.empty())
        {
            int u=pq.top().second;
            if(u==end)
                return dist[u];
            pq.pop();
            if(visited[u]==true)
                continue;
            visited[u]=true;
            for(auto i=ar[u].begin();i!=ar[u].end();i++)
            {
                int v=(*i).first;
                double wt=(*i).second;
                if(dist[v]<dist[u]*wt)
                {
                    dist[v]=dist[u]*wt;
                    pq.push(make_pair(dist[v],v));
                }
            }
        }
        return 0.0;
        
    }
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        v=n;
        ar=new list<pair<int,double>>[n];
        for(int i=0;i<edges.size();i++)
        {
            addEdge(edges[i][0],edges[i][1],succProb[i]);
        }
        return dijkstra(start,end);
    }
};