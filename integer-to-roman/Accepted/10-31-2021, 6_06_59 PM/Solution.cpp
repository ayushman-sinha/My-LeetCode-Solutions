// https://leetcode.com/problems/integer-to-roman

class Solution {
public:
    string intToRoman(int num) {
        map<int,string>m;
        m.insert({1,"I"});
          m.insert({4,"IV"});
          m.insert({5,"V"});
           m.insert({9,"IX"});        
         m.insert({10,"X"});
           m.insert({40,"XL"});
         m.insert({50,"L"});
          m.insert({90,"XC"});
           m.insert({100,"C"});
        m.insert({400,"CD"});
         m.insert({500,"D"});
         m.insert({900,"CM"});
         m.insert({1000,"M"});
        string ans="";
        
        for(auto i=m.rbegin();i!=m.rend();i++)
        {
        while(num>=i->first)
        {
            num-=i->first;
            ans+=i->second;
            
        }
        }
        return ans;
    }
};