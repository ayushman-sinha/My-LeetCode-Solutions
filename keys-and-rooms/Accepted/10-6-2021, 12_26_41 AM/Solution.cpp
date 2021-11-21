// https://leetcode.com/problems/keys-and-rooms

class Solution {
public:
    list<int>*gr;
   
    void addEdge(int u,int v)
    {
        gr[u].push_back(v);
    //gr[v].push_back(u);
    }
    void DFS(vector<bool>&visited,int s)
    {
       // cout<<s<<" ";
     visited[s]=true;
        for(auto i=gr[s].begin();i!=gr[s].end();i++)
        {
            if(visited[*i]==false)
            {
               
                DFS(visited,*i);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
    
        gr=new list<int>[rooms.size()];
         vector<bool>visited(rooms.size(),false);
        for(int i=0;i<rooms.size();i++)
        {
             
            for(int j=0;j<rooms[i].size();j++)
            {
              // cout<<rooms[i][j]<<" ";
                addEdge(i,rooms[i][j]);
            }
        }
      
            DFS(visited,0);
     
        for(int i=0;i<rooms.size();i++)
        {
            if(visited[i]==false)
                return false;
        }
        return true;
    }
};