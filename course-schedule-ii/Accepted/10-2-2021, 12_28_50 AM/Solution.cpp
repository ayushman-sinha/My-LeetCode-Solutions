// https://leetcode.com/problems/course-schedule-ii

class Solution {
public:
    int v;
    list<int>*adj;
   vector<int>q;
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
       q.push_back(s);
    }
    bool isCyclic(int s,vector<bool>&visited,vector<bool>stk)
    {
        if(visited[s]==false)
        {
            visited[s]=true;
            stk[s]=true;
            for(auto i=adj[s].begin();i!=adj[s].end();i++)
            {
                if(visited[*i]==false&&(isCyclic(*i,visited,stk)==true))
                    return true;
                else if(stk[*i]==true)
                    return true;
            }
        }
        stk[s]=false;
        return false;
        
    }
    void topo_sort(vector<bool>&visited)
    {
       
        for(int i=0;i<v;i++)
        {
            if(visited[i]==false)
                topoHelper(i,visited);
        }
        
        
    }
        
    vector<int> findOrder(int numCourses, vector<vector<int>>&prerequisites) {
        v=numCourses;
        adj=new list<int>[v];
        for(int i=0;i<prerequisites.size();i++)
        {
            addEdges(prerequisites[i][0],prerequisites[i][1]);
        }
         vector<bool>visited(v,false);
        vector<bool>visited1(v,false);
        vector<bool>stk(v,false);
        for(int i=0;i<v;i++)
        {
            if(isCyclic(i,visited,stk))
                return (vector<int>());
        }
      
        topo_sort(visited1);
       if(q.size()!=v)
           return vector<int>();
     
        return q;
    }
};