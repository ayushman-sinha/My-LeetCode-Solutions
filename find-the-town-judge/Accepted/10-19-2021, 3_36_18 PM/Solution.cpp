// https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
list<int>*ar;
    void addEdge(int u,int w)
    {
        ar[u].push_back(w);       
    }
    int findJudge(int n, vector<vector<int>>& trust) {
   vector<int>indeg(n,0);
       vector<int>outdeg(n,0);
        ar=new list<int>[n];
        for(int i=0;i<trust.size();i++)
        {
            addEdge(trust[i][0]-1,trust[i][1]-1);
        }
        for(int i=0;i<n;i++)
        {
           outdeg[i]=ar[i].size();
            for(auto j=ar[i].begin();j!=ar[i].end();j++)
            {
                indeg[*j]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(outdeg[i]==0&&indeg[i]==n-1)
                return i+1;
        }
        for(int i=0;i<n;i++)
            cout<<indeg[i]<<" ";
        cout<<"\n";
        for(int i=0;i<n;i++)
            cout<<outdeg[i]<<" ";      
      
        return -1;
    }
};