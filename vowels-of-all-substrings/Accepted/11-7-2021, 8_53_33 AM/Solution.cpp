// https://leetcode.com/problems/vowels-of-all-substrings

class Solution {
public:
    long long countVowels(string s) {
        int n=s.length();
        vector<long long int>ans;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                ans.push_back(n);
            else
                ans.push_back(n-i+ans[i-1]-i);
        }
        long long int a=0;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
          a+=ans[i];
        }
        return a;
    }
};