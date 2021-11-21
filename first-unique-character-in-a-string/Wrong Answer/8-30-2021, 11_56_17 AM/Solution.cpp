// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
         if(s.length()==1)
            return 0;
        string dup=s;
        sort(dup.begin(),dup.end());
        int len=dup.length();
        vector<char>ch;
        for(int i=1;i<len;i++)
        {
            if((dup[i]!=dup[i-1])&&(dup[i]!=dup[i+1]))
            {
               ch.push_back(dup[i]);
            }
        }
        
        if(ch.empty())
            return -1;
     
        else
        {
             for(int i=0;i<ch.size();i++)
           cout<<ch[i]<<" ";
            vector<int>ind;
            for(int i=0;i<ch.size();i++)
            {
                for(int j=0;j<=len;j++)
                {
                    if(ch[i]==s[j])
                    {
                        ind.push_back(j);
                    }
                }
                
            }
            sort(ind.begin(),ind.end());
            return ind[0];
            
         }
    }
};