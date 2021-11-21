// https://leetcode.com/problems/sum-of-square-numbers

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int a=0,b=0;
        for(int i=1;i<=sqrt(c);i++)
        {
            long long int dif=c-(i*i);
            float sqr=sqrt(dif);
             a=(long long int)sqr;
            if(a*a==dif)
                return true;
            
        }
        return false;
    }
};