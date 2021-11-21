// https://leetcode.com/problems/sliding-window-maximum

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int>ans;
        for(int i=0;i<=nums.size()-k;i++)
        {
            int max1=nums[i];
            for(int j=i;j<i+k;j++)
            {
                max1=max(max1,nums[j]);
            }
            ans.push_back(max1);
        }
        return ans;
    }
};