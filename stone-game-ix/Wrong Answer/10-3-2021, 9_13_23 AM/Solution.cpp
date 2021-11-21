// https://leetcode.com/problems/stone-game-ix

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        if(stones.size()==1)
        {
            if(stones[0]%3==0)
                return true;
            else
                return false;
        }
        int sum=0;int i=0;
       while(true)
       {
          for(int j=0;j<stones.size();j++)
          {
              if(stones[j]!=-1)
              {
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
          
        }
        return false;
        
    }
};