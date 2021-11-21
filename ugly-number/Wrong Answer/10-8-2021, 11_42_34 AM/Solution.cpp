// https://leetcode.com/problems/ugly-number

class Solution {
public:
    bool isUgly(int n) {
       
      int k=n;
        while(k!=0)
        {
            if(k==1||k==2||k==3||k==5)
            return true;
            if(k%2==0)
            {
                k/=2;
            }
           else if(k%3==0)
            {
                k/=3;
            }
           else if(k%5==0)
            {
                k/=5;
            }
            else
                return false;
        }
        return true;
    }
};