// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>ans(nums.size(),1);
        
        for(int i=1;i<nums.size();i++)        
           ans[i]=ans[i-1]*nums[i-1]; 
        int k=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i]*=k;
            k*=nums[i];
     }
        return ans;
    }
}; 