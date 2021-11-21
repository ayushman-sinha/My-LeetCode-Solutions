// https://leetcode.com/problems/diagonal-traverse

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int size=mat.size()*mat[0].size();
        int i=0,j=0;bool f=false;
       while(ans.size()<size)
        {
          
            if((i+j)%2==0)
            {
            int a=i,b=j;
                while(a>=0&&b<mat[0].size())
                {
                    ans.push_back(mat[a][b]);
                    a--;
                    b++;
                }
               
            }
            else
            {
                 int a=j,b=i;
                while(a<mat.size()&&b>=0)
                {
                    ans.push_back(mat[a][b]);
                    a++;
                    b--;
                }
            }
           if(!f)
           i++;
           if(f)
               j++;
           if(!f&&i==mat.size())
              {
               f=true;
               i--;
               j++;
              }
           }
         
        
        return ans;
    }
};