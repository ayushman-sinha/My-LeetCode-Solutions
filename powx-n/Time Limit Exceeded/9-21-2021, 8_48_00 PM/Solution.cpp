// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        int k=abs(n);
        double f=1.0;
        for(int i=1;i<=k;i++)
        {
            f=f*x;
        }
        if(n<0)
            return 1/f;
        else
            return f;
    }
};