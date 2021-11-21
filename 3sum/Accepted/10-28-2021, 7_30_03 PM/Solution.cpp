// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       vector<vector<int>>ans;
        set<vector<int>>ds;
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<nums.size();i++)
        {
          int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                if(nums[i]+nums[l]+nums[r]==0)
                {
                    vector<int>tmp={nums[i],nums[l],nums[r]};
                    ds.insert(tmp);
                    l++;r--;
                }
                else if(nums[i]+nums[l]+nums[r]>0)
                    r--;
                else
                    l++;
            }
        }
        for(auto i=ds.begin();i!=ds.end();i++)
            ans.push_back(*i);
         /*
        if(ans.empty())
            return ans;
       
   for(int i=0;i<ans.size()-1;i++)
   {
       for(int j=i+1;j<ans.size();j++)
       {
           if(ans[i][0]==ans[j][0]&&ans[i][1]==ans[j][1]&&ans[i][2]==ans[j][2])
               ans.erase(ans.begin()+j,ans.begin()+j+1);
       }
   }
   */
      
    return ans;
    }
};