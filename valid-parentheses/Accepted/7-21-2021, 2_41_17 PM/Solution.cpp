// https://leetcode.com/problems/valid-parentheses

#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
class Solution 
{
public:bool isValid(string s)
    {
      stack <char> stk;
    string str=s;
   
    int valid_check;
    for(int i=0;i<str.length();i++)
    {
        if((str[i]=='(')||(str[i]=='[')||(str[i]=='{'))
        {
            stk.push(str[i]);
        }
        if((str[i]==')')||(str[i]==']')||(str[i]=='}'))
        {
            if(stk.empty())
            {
                valid_check=0;
                break;
            }
            else
            {
                char temp=stk.top();
                stk.pop();
                if((temp=='(')&&(str[i]==')'))
                    valid_check=1;
                else if((temp=='{')&&(str[i]=='}'))
                    valid_check=1;
                else if((temp=='[')&&(str[i]==']'))
                    valid_check=1;
                else
                {
                    valid_check=0;
                    break;
                }
            }
        }
     }
    if((stk.empty())&(valid_check!=0))
        valid_check=1;
    else
        valid_check=0;
    
    if(valid_check==1)
  return true;
    else
        return false;
    
        
    }
    int main()
    {
        Solution a1;
       string temp;
        cin>>temp;
        
        bool m=a1.isValid(temp);
       
            cout <<m;
        
        return 0;
    }
    };