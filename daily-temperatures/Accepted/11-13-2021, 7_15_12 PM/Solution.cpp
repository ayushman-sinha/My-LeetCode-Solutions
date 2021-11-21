// https://leetcode.com/problems/daily-temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size(),0);
        stack<int>stk;
        stk.push(0);
        for(int i=1;i<temperatures.size();i++)
        {
            while(!stk.empty()&&temperatures[i]>temperatures[stk.top()])
            {
                ans[stk.top()]=i-stk.top();
                stk.pop();
            }
           stk.push(i);
            }
           
        
        return  ans;
    }
};