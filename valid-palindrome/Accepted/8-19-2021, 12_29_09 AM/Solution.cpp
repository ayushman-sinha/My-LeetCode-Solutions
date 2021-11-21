// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
      
        
        if(s=="")
            return false;
           
      
        int a=0;
        int b=s.length()-1;
       
        while(a<=b)
        {
            char ch1=s[a];
            char ch2=s[b];
            
            if(!isalnum(ch1))
            {
                a++;
                
            }
            else if(!isalnum(ch2))
            {
                b--;
            }
            else if(tolower(ch1)!=tolower(ch2))
                return false;
            else
            {
                a++;
                b--;
            }
        }
       return true;
       
    }
};