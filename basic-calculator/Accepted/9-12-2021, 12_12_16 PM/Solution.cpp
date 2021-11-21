// https://leetcode.com/problems/basic-calculator

class Solution {
public:
    int calculate(string s) {
       stack<int>stk;
       long int res=0;
        int sign=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48&&s[i]<=57)
            {
                int no=0;
                while(i<s.length()&&s[i]>=48&&s[i]<=57)
                {
                    no=no*10+(s[i]-48);
                    i++;
                }
               
                res+=sign*no;     
                 i--;
            }
            else if(s[i]=='+')
            sign=1;
            else if(s[i]=='-')
                sign=-1;
            else if(s[i]=='(')
            {
                stk.push(res);
                stk.push(sign);
                res = 0;
                sign = 1;
              }
            else if(s[i]==')')
            {
                 res *= stk.top(); 
                stk.pop();
                res += stk.top();
                stk.pop();
            }             
           
        }
        return res;
    }
};