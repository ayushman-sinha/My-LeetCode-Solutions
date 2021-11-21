// https://leetcode.com/problems/base-7

class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        int k=abs(num);
        string s="";
        while(k!=0)
        {
            s=(char)((k%7)+48)+s;
            k/=7;
        }
        if(num<0)
            s='-'+s;
        return s;
        
    }
};