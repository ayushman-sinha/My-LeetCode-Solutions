// https://leetcode.com/problems/implement-strstr

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
            return 0;
        
        int len=needle.length();
        int j=0;int ind=0;int c=0;int ind_first=0;
        for(int i=0;i<haystack.length();i++)
        {
            if(j==len-1)
                break;
            if((haystack[i]==needle[j])&&(j<len))
            {
                if(j==0)
                {
                ind=i;
                    ind_first=i;
                j++;
                    c=1;
                    continue;
                }
                else
                {
                    if(ind-i==1)
                    {
                        ind=i;
                        j++;
                            c=1;
                    }
                    else
                    {
                        break;
                    }
                }
            
            }
            if((haystack[i]!=needle[j])&&(c==1))
            {
               break;
            }
         }
        if((c==0)||(j!=len-1))
            return -1;
        else
            return ind_first;
    }
};