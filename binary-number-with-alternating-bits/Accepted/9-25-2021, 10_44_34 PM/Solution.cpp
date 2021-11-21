// https://leetcode.com/problems/binary-number-with-alternating-bits

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int k=n;
        int c=k%2;
        
        int count=0;
        while(k!=0)
        {
            int a=k%2;
            if(c==1)
            {
                if(count%2==0)
                {
                    if(a!=1) 
                        return false;
                }
                else
                {
                    if(a!=0)
                        return 0;
                        
                }
            }
            else
            {
                if(count%2==0)
                {
                    if(a!=0) 
                        return false;
                }
                else
                {
                    if(a!=1)
                        return 0;
            }
                
        }
            count++;
                k/=2;
    }
        return true;
    }
};