// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum-nums[0]==0)
            return 0;      
        sum-=nums[nums.size()-1];
        int c=0; int mini=INT_MAX;
          if(sum==0)
           {
              mini=nums.size()-1;
              c=1;
          }
        int sum1=nums[nums.size()-1];
        
        int i=nums.size()-2;
       
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