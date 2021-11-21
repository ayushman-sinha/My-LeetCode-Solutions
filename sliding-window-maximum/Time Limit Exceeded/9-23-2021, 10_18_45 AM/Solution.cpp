// https://leetcode.com/problems/sliding-window-maximum

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int>ans;
        for(int i=0;i<nums.size()-k+1;i++)
        {
            priority_queue<int>pq;
            for(int j=i;j<k+i;j++)
            {
                pq.push(nums[j]);
            }
            ans.push_back(pq.top());
        }
        return ans;
    }
};