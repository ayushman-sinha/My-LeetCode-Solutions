// https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence

class Solution {
public:
    bool areNumbersAscending(string s) {        
        int prev=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48&&s[i]<=57)
            {
                int k=i;int sum=0;
                while(s[k]>=48&&s[k]<=57)
                {
                    sum=sum*10+(s[k]-48);
                    k++;
                }
                if(sum<=prev)
                    return false;
                prev=sum;
               
                i=k-1;
            }
                
        }      
        return true; 
    }
};