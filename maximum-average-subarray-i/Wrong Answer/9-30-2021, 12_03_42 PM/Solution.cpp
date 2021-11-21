// https://leetcode.com/problems/maximum-average-subarray-i

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        queue<int>q;double ans=0;long long int sum=0;
        if(k==1)
        {
           sort(nums.begin(),nums.end(),greater <int>());
            return (double)nums[0];
        }
        for(int i=0;i<k;i++)
        {
            q.push(nums[i]);
            sum+=nums[i];
        }
        ans=(double)sum/k;
        for(int i=k;i<nums.size()-1;i++)
        {           
            sum-=q.front();
             q.pop();
            sum+=nums[i];
            ans=fmax(ans,(double)sum/k);
            
        }
        return ans;
    }
};