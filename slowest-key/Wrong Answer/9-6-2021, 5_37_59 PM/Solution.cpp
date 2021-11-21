// https://leetcode.com/problems/slowest-key

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<pair<int,char>>rel_time;
      
      
     long int max_t=releaseTimes[0];
        for(int i=1;i<releaseTimes.size();i++)
        {
            long int dif=releaseTimes[i]-releaseTimes[i-1];
           
           
            rel_time.push_back(make_pair(dif,keysPressed[i]));
              
            
           
        }
        sort(rel_time.rbegin(),rel_time.rend());
        
        for(int i=0;i<rel_time.size();i++)
            cout<<rel_time[i].first<<" "<<rel_time[i].second<<", ";
        
        char max_lex;
        int c=0;
        for(int i=0;i<rel_time.size()-1;i++)
        {
            if(rel_time[i].first==rel_time[i+1].first&&c==0)
            {
                if(rel_time[i].second>rel_time[i+1].second)
                {
                    max_lex=rel_time[i].second;
                }
                else
                {
                    max_lex=rel_time[i+1].second;
                }
                c=1;
            }
            else
                
            {
                
                    max_lex=rel_time[i].second;
                
                c=1;
            }
            if(c==1)
                break;
        }
        
       
        return max_lex;
    }
};