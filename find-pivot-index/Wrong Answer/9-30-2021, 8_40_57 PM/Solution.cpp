// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
      
        sum-=nums[nums.size()-1];
          if(sum==0)
            return nums.size()-1;
        int sum1=nums[nums.size()-1];
        
        int i=nums.size()-2;
        int mini=INT_MAX;int c=0;
        while(i>=0)
        {
            sum-=nums[i];
            if(sum==sum1)
               {
                mini=min(mini,i);
                c=1;
            }
            sum1+=nums[i];
            i--;
        }
        if(c==1)
            return mini;
        return -1;
    }
};