// https://leetcode.com/problems/orderly-queue

class Solution {
public:
    string orderlyQueue(string s, int k) {
     string ans=s;
     
        if(k==1)
        {
            for(int i=0;i<s.length();i++)
            {
               string t=s.substr(i)+s.substr(0,i);
                if((t).compare(ans)<0)
                {
                    ans=t;
                }
            }
            return ans;
          }
        else
        {
            sort(s.begin(),s.end());
            return s;
        }
    }
    
};