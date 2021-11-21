// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int a=1;
        long long int b=num;
        long long int mid=0;
        while(a<=b)
        {
            mid=a+((b-a)/2);
            if(mid*mid==num)
                break;
             else if(mid*mid>num)
                b=mid-1;
            else
                a=mid+1;
        }
        if(mid*mid==num)
            return true;
        else
            return false;
        
        
    }
};