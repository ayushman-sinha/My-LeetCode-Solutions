// https://leetcode.com/problems/majority-element-ii

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>ans;
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(i->second>nums.size()/3)
                ans.push_back(i->first);
        }
        return ans;
    }
};