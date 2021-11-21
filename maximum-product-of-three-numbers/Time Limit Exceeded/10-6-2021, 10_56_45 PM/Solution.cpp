// https://leetcode.com/problems/maximum-product-of-three-numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
             for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++) 
                {
                    max1=max(max1,nums[i]*nums[j]*nums[k]);
                }
                 
            }
        }
        return max1;
        /*
       sort(nums.begin(),nums.end());
        return max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3],nums[0]*nums[1]*nums[nums.size()-1]); 
        */
    }
};