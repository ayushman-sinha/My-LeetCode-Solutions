// https://leetcode.com/problems/lexicographical-numbers

class Solution {
public:
      vector<int>ans;
  void dfs(int i,int n)
    {
      if(i>n)
          return;
      if(i!=0)
      ans.push_back(i);
      for(int j=0;j<10;j++)
      {
          if(i==0&&j==0)
              continue;
          dfs(i*10+j,n);
      }
      
    }
    vector<int> lexicalOrder(int n) {
      
       dfs(0,n);
        return ans;
    }
};