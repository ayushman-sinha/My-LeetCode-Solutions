// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0)
          return false;
       else
        {
            if(x>INT_MAX)
                return false;
            int k=x;
            int s=0;
            
            while(k!=0)
            {
                s=(s*10)+(k%10);
                k=k/10;                
            }
            if(s==x)
            {
                return true;
            }
           else
               return false;
        }
    }
};