// https://leetcode.com/problems/next-greater-element-ii

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {        
        vector<int>ans(nums.size(),-1);
        stack<int>stk;
        stk.push(0);
        for(int i=1;i<nums.size()*2;i++)
        {          
            while(!stk.empty()&&nums[stk.top()%nums.size()]<nums[i%nums.size()])
            {
                ans[stk.top()%nums.size()]=nums[i%nums.size()];
                stk.pop();
            }            
            stk.push(i%nums.size());
        }
        return ans;
    }
};