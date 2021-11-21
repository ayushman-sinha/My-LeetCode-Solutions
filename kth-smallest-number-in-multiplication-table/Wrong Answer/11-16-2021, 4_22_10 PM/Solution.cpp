// https://leetcode.com/problems/kth-smallest-number-in-multiplication-table

class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        priority_queue<int,vector<int>,greater <int>>pq;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                pq.push(i*j);
                
                if(pq.size()>k)
                  break;
            }
            
        }
      for(int i=1;i<k;i++)
      {
          if(!pq.empty())          
              pq.pop();
          
      }
        /*
        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
            
        }*/
        return pq.top();
    }
};