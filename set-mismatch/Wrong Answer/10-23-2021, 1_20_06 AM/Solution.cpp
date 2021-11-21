// https://leetcode.com/problems/set-mismatch

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++)
        {
              if(nums[i]==nums[i+1])
              {
                  ans.push_back(nums[i]);
                  if(nums[i]+1<=nums.size())
                  ans.push_back(nums[i]+1);
                  else
                      ans.push_back(nums[i]-1);
                  return ans;
              }
        }
        return ans;
    }
};