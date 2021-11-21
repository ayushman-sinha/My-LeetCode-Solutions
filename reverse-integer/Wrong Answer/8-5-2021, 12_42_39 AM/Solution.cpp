// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) 
    {
        int k=x;
        int k1=x;
        int c=0;
        int s=0;
        x=abs(x);
        while(k1!=0)
        {
            c++;
            if(c>7)
                break;
            k1=k1/10;
        }
        if(c>7)
            return 0;
        else
        {
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
    }
};