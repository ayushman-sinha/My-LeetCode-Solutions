// https://leetcode.com/problems/next-permutation

class Solution {
public:
    vector<vector<int>>ans;
    void permute(vector<int>nums,int i,int n)
    {
        if(i==n)
        {
            ans.push_back(nums);
           return;
        }
        else
        {
            for(int j=i;j<=n;j++)
            {
                swap(nums[i],nums[j]);
                permute(nums,i+1,n);
               swap(nums[i],nums[j]);
            }
        }
    }
  
    void nextPermutation(vector<int>& nums) {
        permute(nums,0,nums.size()-1);
        sort(ans.begin(),ans.end());
        /*
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
                cout<<ans[i][j]<<" ";
            cout<<"\n";
        }
        */
        int ind=0;
         if(nums.size()>1)
         {
              for(int i=0;i<ans.size();i++)
             {
                  bool b=false;
                for(int j=0;j<ans[i].size();j++)
                {
                    if(nums[j]==ans[i][j])
                    {
                        b=true;
                    }
                    else
                    {
                        b=false;
                        break;
                    }
                }
                  if(b==false)
                  {
                      ind=i;
                      break;
                  }
             }
        for(int i=0;i<nums.size();i++)
        {
           
            nums[i]=ans[ind][i];
        }
         }
        
    }
};