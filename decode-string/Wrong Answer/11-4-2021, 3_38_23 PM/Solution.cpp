// https://leetcode.com/problems/decode-string

class Solution {
public:
    string decodeString(string s) {
        string ans="";
        
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
                ans+=s[i];
            else if(isdigit(s[i]))
            {
                stack<pair<int,int>>stk;
                //stk.push({s[i]-48,i+1});
                int j=i;
                string tmp=s;string tmp2="";bool f=false;
                int num=s[i]-48;
                while(j<s.length())
                {
                  
                   if(isdigit(s[j]))
                    {
                       if(!isdigit(s[j+1]))
                       {
                           if(num==0)
                             stk.push({s[j]-48,j+1});   
                           else
                       stk.push({num,j+1});
                           num=0;
                       }
                       else
                           num=(num*10)+(s[j+1]-48);
                    }
                    else if(!stk.empty()&&s[j]==']')
                    {
                        int a=stk.top().first;//no of times present
                        int b=stk.top().second;//index of [
                        stk.pop();
                        if(!f)
                        tmp2=tmp.substr(b+1,j-b-1);//substring generated
                        else
                            tmp2=tmp;
                        f=true;
                        cout<<tmp2<<" ";
                        string w="";
                        for(int k=1;k<=a;k++)
                            w+=tmp2;
                        tmp2=w;
                        if(!stk.empty())
                        tmp=(s.substr(stk.top().second+1,b-stk.top().second-2))+tmp2;
                        
                    }
                    j++;
                    if(f&&stk.empty())
                        break;
                }
                
                ans+=tmp2;
                i=j-1;
            }
            
        }
        return ans;
    }
};