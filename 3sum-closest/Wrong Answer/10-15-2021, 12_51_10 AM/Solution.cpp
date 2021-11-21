// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=INT_MAX,tsum=INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]==target)
                        return target;
                   
                      if(abs(target-nums[i]-nums[j]-nums[k])<tsum)
                      {
                          sum=min(sum,nums[i]+nums[j]+nums[k]);
                          tsum=abs(target-sum);
                      }
                    
                   
                }
            }
        }
        return sum;
    }
};