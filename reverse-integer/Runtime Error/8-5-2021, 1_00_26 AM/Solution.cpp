// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) 
    {
        long int k=x;
        x=abs(x);
      
        int s=0;
         while(x!=0)
        {
           s=(s*10)+(x%10);
             if(s>INT_MAX)
                 return 0;
            x=x/10;
           
            
        }
        if(k>=0)
            return s;
        else
            return -s;
     }
        
    
};