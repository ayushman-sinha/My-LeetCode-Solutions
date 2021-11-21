// https://leetcode.com/problems/reverse-bits

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
      string s="";
        while(n!=0)
        {
            int a=n%2;
            s=((char)(a+48))+s;
            n=n/2;
        }
        int k=32-s.length();
        for(int i=0;i<k;i++)
        {
            s='0'+s;
        }
     //   cout<<s<<" \n";
    //reverse(s.begin(),s.end());
         // cout<<s<<" \n";
        uint32_t ans=0;int c=0;
        for(int i=0;i<s.length();i++)
        {
            ans+=(s[i]-48)*pow(2,c);
            c++;
        }
        return ans;
    }
};