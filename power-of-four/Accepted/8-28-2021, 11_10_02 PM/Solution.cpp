// https://leetcode.com/problems/power-of-four

class Solution {
public:
    bool isPowerOfFour(int n) {
            if(n==0)
            return false;int c=0;
        int n1=n;
        while(n>0)
        {
           if(n%4==0)
               c++;
            n/=4;
        }
       
        int res=(int)pow(4,c);
         //cout<<res<<" ";
        if(n1==res)
        return true;
        else
            return false;
    }
};