// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(long long int x) {
       unsigned long long int a=0;
       unsigned long long int b=x+1;
        while(a<b)
        {
          unsigned long long int mid=(a+b)/2;
            if((mid*mid)>x)
               b=mid;
            else
                a=mid+1;
                
        }
        return a-1;
    }
};