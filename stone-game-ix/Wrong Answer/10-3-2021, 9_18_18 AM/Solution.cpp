// https://leetcode.com/problems/stone-game-ix

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        if(stones.size()==1)
        {
            if(stones[0]%3==0)
                return false;
            
                return false;
        }
        int sum=0;int i=0;
       while(true)
       {
           int c=0;
          for(int j=0;j<stones.size();j++)
          {
              if(stones[j]==-1)
                  c++;
              if(stones[j]!=-1)
              {
                  c++;
                  if(sum+stones[j]%3!=0)
                  {
                      sum+=stones[j];
                      stones[j]=-1;
                      i++;
                  }
                 
              }
              
          }
           
           if(sum%3==0)
           {
             if(i%2==0)
             {
                  return true;//Alice Wins
             }    
                  return false;//Bob wins
           
             
           }
          if(c==stones.size())
              break;
        }
        return false;
        
    }
};