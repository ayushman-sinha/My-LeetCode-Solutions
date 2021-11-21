// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation

class Solution {
public:
    bool isPrime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
        {
            int k=i;int c=0;
            while(k!=0)
            {
                if(k%2==1)
                    c++;
                k/=2;
            }
           // cout<<c<<" ";
            if(c==1)
                continue;
            if(isPrime(c)==true)
                count++;
            
        }
        return count;
    }
};