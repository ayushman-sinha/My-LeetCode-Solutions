// https://leetcode.com/problems/all-paths-from-source-to-target

class Solution {
public:
     vector<vector<int>> ans;
    void dfs(vector<vector<int>>& graph,int src,int dest,vector<int>v)
    {
        v.push_back(src);
        if(src==dest)
        {
            ans.push_back(v);
            return;
        }
        for(auto i=graph[src].begin();i!=graph[src].end();i++)
        {
            dfs(graph,*i,dest,v);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>v;
        dfs(graph,0,graph.size()-1,v);
        return ans;
    }
};