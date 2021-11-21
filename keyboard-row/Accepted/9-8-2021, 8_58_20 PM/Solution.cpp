// https://leetcode.com/problems/keyboard-row

class Solution {
public:
    string r1="QqWwEeRrTtYyUuIiOoPp";
        string r2="AaSsDdFfGgHhJjKkLl";
        string r3="ZzXxCcVvBbNnMm";
    int find(char a)
    {
        for(int i=0;i<r1.length();i++)
        {
            if(a==r1[i])
                return 1;
        }
        for(int i=0;i<r2.length();i++)
        {
            if(a==r2[i])
                return 2;
        }
        for(int i=0;i<r1.length();i++)
        {
            if(a==r3[i])
                return 3;
        }
       return 0; 
    }
    bool ser(char a,int b)
    {
       if(b==1)
       {
           for(int i=0;i<r1.length();i++)
           {
               if(a==r1[i])
                   return true;
           }
           return false;
       }
        if(b==2)
       {
           for(int i=0;i<r2.length();i++)
           {
               if(a==r2[i])
                   return true;
           }
           return false;
       }
         if(b==3)
       {
           for(int i=0;i<r3.length();i++)
           {
               if(a==r3[i])
                   return true;
           }
           return false;
       }
        return false;
    }
    vector<string> findWords(vector<string>& words) {
     
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
           string str=words[i];
            int b=find(str[0]);int c=0;
            for(int j=1;j<str.length();j++)
            {
                if(b==1)
                {
                    bool f=ser(str[j],1);
                    if(f==false)
                    {
                      c=-1;
                        break;
                    }
                        
                }
                if(b==2)
                {
                    bool f=ser(str[j],2);
                    if(f==false)
                    {
                      c=-1;
                        break;
                    }
                        
                }
                if(b==3)
                {
                    bool f=ser(str[j],3);
                    if(f==false)
                    {
                      c=-1;
                        break;
                    }
                        
                }
                    
                
            }
            if(c==0)
                ans.push_back(str);
        }
        return ans;
    }
};