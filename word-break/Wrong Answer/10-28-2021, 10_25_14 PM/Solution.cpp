// https://leetcode.com/problems/word-break

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int c=0;
        for(int i=0;i<wordDict.size();i++)
        {
            if(c==s.length())
                   return true;
            size_t f;
            while(true)
            {
              
                f=s.find(wordDict[i]);
                if(f==string::npos)
                    break;
                else
                {
                    int j=(int)f;
                    int len=wordDict[i].length()+j-1;
                    while(j<=len)
                    {
                        s[j]='#';
                        j++;
                        c++;
                    }
                }
            }
        }
        if(c==s.length())
            return true;
        return false;
    }
};