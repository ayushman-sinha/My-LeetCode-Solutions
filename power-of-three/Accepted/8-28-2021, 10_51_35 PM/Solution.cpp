// https://leetcode.com/problems/power-of-three

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;int c=0;
        int n1=n;
        while(n>0)
        {
           if(n%3==0)
               c++;
            n/=3;
        }
       
        int res=(int)pow(3,c);
         cout<<res<<" ";
        if(n1==res)
        return true;
        else
            return false;
    }
};