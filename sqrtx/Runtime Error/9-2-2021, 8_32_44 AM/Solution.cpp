// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
  if(x==0||x==1)
      return x;
        int i=0;
        int res=1;
        while(res<=x)
        {
            ++i;
            res=i*i;
        }
        return i-1;
        
    }
};