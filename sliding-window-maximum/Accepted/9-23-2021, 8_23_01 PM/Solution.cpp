// https://leetcode.com/problems/sliding-window-maximum

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
  int i;
        vector<int>ans;
        deque<int>dq(k);
        for(int i=0;i<k;i++)
        {
            while((!dq.empty())&&nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for (int i=k ;i<nums.size();i++)
        {
            ans.push_back(nums[dq.front()]);
            while((!dq.empty())&&dq.front()<=i-k)
            {
                dq.pop_front();
            }
               while((!dq.empty())&&nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};