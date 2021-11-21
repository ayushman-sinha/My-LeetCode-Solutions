// https://leetcode.com/problems/course-schedule-ii

class Solution {
public:
    int v;
    list<int>*adj;
    queue<int>q;
    void addEdges(int u,int v)
    {
        adj[u].push_back(v);
    }
    void topoHelper(int s,vector<bool>&visited)
    {
        visited[s]=true;
        for(auto i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(visited[*i]==false)
            {
                topoHelper(*i,visited);
            }
        }
       q.push(s);
    }
    void topo_sort()
    {
        vector<bool>visited(v,false);
        for(int i=0;i<v;i++)
        {
            if(visited[v]==false)
                topoHelper(i,visited);
        }
        
        
    }
        
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        v=numCourses;
        adj=new list<int>[v];
        for(int i=0;i<prerequisites.size();i++)
        {
            addEdges(prerequisites[i][0],prerequisites[i][1]);
        }
        topo_sort();
        vector<int>ans;
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};