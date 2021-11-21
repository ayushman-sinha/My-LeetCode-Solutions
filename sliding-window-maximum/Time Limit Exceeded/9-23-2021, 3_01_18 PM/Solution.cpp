// https://leetcode.com/problems/sliding-window-maximum

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int>ans;
         priority_queue<int>pq;
            for(int j=0;j<k;j++)
            {
                pq.push(nums[j]);
            }
            ans.push_back(pq.top());
        for(int i=1;i<=nums.size()-k;i++)
        {
        
                stack<int>stk;
                while(!pq.empty())
                {
                   
                    if(pq.top()==nums[i-1])
                    {
                        pq.pop();
                        break;
                    }
                    else
                    {
                        stk.push(pq.top());
                         pq.pop();
                    }
                }
            while(!stk.empty())
            {
                pq.push(stk.top());
                stk.pop();
            }
            pq.push(nums[i+k-1]);
            ans.push_back(pq.top());
            
        }
        return ans;
    }
};