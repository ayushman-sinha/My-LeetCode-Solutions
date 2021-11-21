// https://leetcode.com/problems/next-greater-element-ii

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int>ans(nums.size(),-1);
        stack<int>stk;
        stk.push(0);
        for(int i=1;i<nums.size()*2;i++)
        {
            bool b=false;
            while(!stk.empty()&&nums[stk.top()%nums.size()]<nums[i%nums.size()])
            {
                ans[stk.top()%nums.size()]=nums[i%nums.size()];
                stk.pop();
              b=true;
            }
             if(b)
                ans[i%nums.size()]= -1; 
           
            stk.push(i%nums.size());
        }
        return ans;
    }
};