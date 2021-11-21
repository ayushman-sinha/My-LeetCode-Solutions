// https://leetcode.com/problems/longest-uncommon-subsequence-i

class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a.length()==b.length())
        {
            if(a==b)
                return -1;
            else
                return a.length();
                       
        }
        else
           {
            int dif=a.length()-b.length();
            if(dif<0)
            {
                return (a.length()+abs(dif));
            }
            else
                return (b.length()+abs(dif));
            
           }
    }
};