// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        n=abs(n);
        while(n!=0)
        {
            if(n==1)
            return true;
            if(n%2!=0)
                return false;
            else
                n=n/2;
        }
        return true;
    }
};