// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
     int fibonac(int *dp,int n) {
        if(dp[n]==-1)
        {
            if(n<=1)
                dp[n]=n;
            else
            dp[n]=fibonac(dp,n-1)+fibonac(dp,n-2);
            
        }
         return dp[n];
     }
    int fib(int n) {
        int dp[100];
        for(int i=0;i<100;i++)
            dp[i]=-1;
        
        return fibonac(dp,n);
    }
};