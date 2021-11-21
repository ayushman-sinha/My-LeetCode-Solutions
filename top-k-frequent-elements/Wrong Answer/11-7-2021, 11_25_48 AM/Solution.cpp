// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(i->second>=k)
                ans.push_back(i->first);
        }
        if(!ans.empty())
        return ans;
        return nums;
    }
};