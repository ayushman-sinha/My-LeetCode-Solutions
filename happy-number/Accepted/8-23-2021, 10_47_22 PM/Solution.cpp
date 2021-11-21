// https://leetcode.com/problems/happy-number

class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7)
            return true;
        if(n>1&&n<10)
            return false;
        
        while(n>9)
        {
            long long int s=0;
            while(n!=0)
            {
                int a=n%10;
                s=s+(a*a);
                n=n/10;                
            }
            if(s==1||s==7)
                return true;
            else if(s>1&&s<10)
                return false;
            else
                n=s;
            
        }
        return false;
    }
};