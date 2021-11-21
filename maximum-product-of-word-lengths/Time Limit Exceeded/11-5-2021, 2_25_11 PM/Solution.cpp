// https://leetcode.com/problems/maximum-product-of-word-lengths

class Solution {
public:
    bool isDif(string a,string b)
    {
        if(a==b)
            return false;
        for(int i=0;i<a.length();i++)
        {
            for(int j=0;j<b.length();j++)
                if(a[i]==b[j])
                    return false;
        }
        return true;
    }
    int maxProduct(vector<string>& words) {
        int ans=INT_MIN;
        
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if(isDif(words[i],words[j]))
                {
                    int k=words[i].length()*words[j].length();
                   ans=max(ans,k); 
                }
            }
        }
        if(ans==INT_MIN)
            return 0;
        return ans;
    }
};