// https://leetcode.com/problems/lexicographical-numbers

class Solution {
public:
    static bool comp(int a,int b)
    {
        if(to_string(a)<to_string(b))
            return true;
        return false;
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        for(int i=1;i<=n;i++)
            ans.push_back(i);
        sort(ans.begin(),ans.end(),comp);
        return ans;
    }
};