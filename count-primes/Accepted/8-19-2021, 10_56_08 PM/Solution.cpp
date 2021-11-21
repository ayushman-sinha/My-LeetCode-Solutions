// https://leetcode.com/problems/count-primes

class Solution {
public:
    int countPrimes(int n) {
      vector <bool> ar(n+1,true);
        ar[0]=false;
        ar[1]=false;
     
        for(int i=2;i*i<=n;i++)
        {
            if(ar[i]==true)
            {
                for(int j=i*i;j<=n;j+=i)
                    ar[j]=false;
            }
        }
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(ar[i])
                count++;
        }
        return count;
    }
};