// https://leetcode.com/problems/longest-increasing-subsequence

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans=0;
        vector<int>li;
        for(int i=0;i<nums.size();i++)
        {
            if(li.empty()||nums[i]>li[li.size()-1])
                li.push_back(nums[i]);
            else
            {
                auto it=lower_bound(li.begin(),li.end(),nums[i]);
                *it=nums[i];
            }
        }
        return li.size();
    }
};