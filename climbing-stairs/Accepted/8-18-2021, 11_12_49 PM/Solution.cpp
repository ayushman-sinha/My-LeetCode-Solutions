// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
      int a=1;
        int b=2;
        int c;
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        n=n-3;
        while(n>=0)
        {
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return c;
    }
};