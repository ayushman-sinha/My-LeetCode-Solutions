// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long int pro=1;int z=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                z++;
            if(nums[i]!=0)
                pro*=nums[i];
        }
       vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(z==nums.size())
                 ans.push_back(0);
           else if(z>0&&nums[i]!=0)
                ans.push_back(0);
            else if(z>0&&nums[i]==0)
                ans.push_back(pro);
            else
                ans.push_back(pro/nums[i]);
        }
            
        return ans;
    }
}; 