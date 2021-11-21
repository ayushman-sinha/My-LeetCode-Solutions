// https://leetcode.com/problems/count-primes

class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1)
            return 0;
        int count=0;
        for(int i=2;i<n;i++)
        {
            int c=0;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
                count++;
        }
        return count;
    }
};