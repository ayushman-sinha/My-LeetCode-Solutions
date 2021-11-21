// https://leetcode.com/problems/array-nesting

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
      vector<bool>vis(nums.size(),false);
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]==false)
            {
                
                int start=nums[i];
                int count=0;
                do
                {
                    start=nums[start];
                    count++;
                    vis[start]=true;
                
                res=max(res,count);
                }while(start!=nums[i]);
                 
            }
        }
        return res;
    }
};