// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    string largestOddNumber(string num) {        
        if(num.empty()||(num[num.length()-1]-48)%2!=0)
            return num;    
        for(int i=num.length()-1;i>=0;i--)        
            if((num[i]-48)%2!=0)            
             return num.substr(0,i+1);   
        return "";
    }
};