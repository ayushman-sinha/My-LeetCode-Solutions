// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       vector<vector<int>>ans;
        if(nums.size()<3)
            return ans;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int>tmp={nums[i],nums[j],nums[k]};
                        sort(tmp.begin(),tmp.end());
                        ans.push_back(tmp);
                    }
                        
                }
            }
        }
   for(int i=0;i<ans.size()-1;i++)
   {
       for(int j=i+1;j<ans.size();j++)
       {
           if(ans[i][0]==ans[j][0]&&ans[i][1]==ans[j][1]&&ans[i][2]==ans[j][2])
               ans.erase(ans.begin()+j,ans.begin()+j+1);
       }
   }
      
    return ans;
    }
};