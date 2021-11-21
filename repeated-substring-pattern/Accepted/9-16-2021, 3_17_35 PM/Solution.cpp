// https://leetcode.com/problems/repeated-substring-pattern

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
     
        string w=(s+s).substr(1,2*s.size()-2);
        if(w.find(s)!=-1)
            return true;
        else
            return false;
            
      
        }
      
};