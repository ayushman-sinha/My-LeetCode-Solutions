// https://leetcode.com/problems/longest-palindrome

class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int>m;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        bool sin=false;int ans=0;
      
        for(auto i=m.begin();i!=m.end();i++)
        {          
           if(i->second%2==0)           
                ans+=i->second;           
            else 
            {
                sin=true;
                ans+=i->second-1;
            }
        }
        if(sin)
        return ans+1;
        return ans;
    }
};