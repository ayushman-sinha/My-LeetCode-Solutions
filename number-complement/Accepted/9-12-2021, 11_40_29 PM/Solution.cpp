// https://leetcode.com/problems/number-complement

class Solution {
public:
    int findComplement(int num) {
       string s="";
        while(num!=0)
        {
            int a=num%2;
            if(a==1)
                s=s+to_string(0);
            else
                s=s+to_string(1);
            num=num/2;
        }
        long int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int tmp=s[i]-48;
            ans=ans+(tmp*pow(2,i));
        }
        return ans;
    }
};