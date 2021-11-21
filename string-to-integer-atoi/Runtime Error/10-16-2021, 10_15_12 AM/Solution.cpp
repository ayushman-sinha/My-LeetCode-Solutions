// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        long int num=0;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])||s[i]=='.'||s[i]==',')
            {
                return 0;
            }
            if(i<s.length()-1&&s[i]=='-'&&s[i+1]>=48&&s[i+1]<=57)
            {
                sign=-1;
            }
            if(i<s.length()-1&&(s[i]=='+'||s[i]=='-')&&s[i+1]<48||s[i+1]>57)
            {
                return 0;
            }
            if(s[i]>=48&&s[i]<=57)
            {
                int k=i;
                while(s[k]>=48&&s[k]<=57)
                {
                    num=num*10+(s[k]-48);
                    k++;
                }
               
                num*=sign;
                if(num<INT_MIN)
                 num=INT_MIN;
                if(num>INT_MAX)
                    num=INT_MAX;
                return num;
            }
        }
        return 0;
    }
};