// https://leetcode.com/problems/implement-strstr

class Solution {
public:
    int strStr(string haystack, string needle) {
          if(needle.length()==0)
    return 0;
    if(needle.length()==1)
    {
        int in=-1;
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
              in=i;
              break;
            }
        }
        return in;
    }
    char a=needle[0];
    char b=needle[needle.length()-1];
    int c=0;
    string str="";int ind=0;
    for(int i=0;i<haystack.length();i++)
    {
       if((haystack[i]==a)&&(c==0))
       {
           ind=i;
           str=str+a;
           c=1;
           continue;
       }
       if((c==1)&&(haystack[i]!=b))
       {
          str=str+haystack[i];
       }
       if((c==1)&&(haystack[i]==b))
       {
           str=str+b;
           break;
       }
       
    }
    if(c==0)
    return -1;
    else{
        if(str==needle)
        return ind;
        else
        return -1;

    }
    }
};