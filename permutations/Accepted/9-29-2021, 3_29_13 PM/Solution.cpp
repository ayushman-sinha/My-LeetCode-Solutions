// https://leetcode.com/problems/permutations

class Solution {
public:
     vector<vector<int>>ans;
    void permute(vector<int>nums,int a,int n)
    {
        if(a==n)
            ans.push_back(nums);
        for(int i=a;i<=n;i++)
        {
            swap(nums[i],nums[a]);
            permute(nums,a+1,n);
            swap(nums[i],nums[a]);
        }
            
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
       
        permute(nums,0,nums.size()-1);
        
       return ans;
    }
};