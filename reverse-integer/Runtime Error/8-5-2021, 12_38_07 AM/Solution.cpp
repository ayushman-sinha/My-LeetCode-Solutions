// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) 
    {
        int k=x;
        int s=0;
        x=abs(x);
        while(x!=0)
        {
           s=(s*10)+(x%10);
            x=x/10;
            
        }
        if(k>=0)
            return s;
        else
            return -s;
        
    }
};