// https://leetcode.com/problems/next-permutation

class Solution {
public:
    vector<pair<vector<int>,int>>ans;int c=0;
    bool should_swap(vector<int>nums,int cur,int start)
    {
          for (int i = start; i < cur; i++)
        if (nums[i] == nums[cur])
            return 0;
    return 1;
    }
    void permute(vector<int>nums,int i,int n)
    {
        if(i==n)
        {
            ans.push_back(make_pair(nums,c));
            c++;
           return;
        }
        else
        {
            for(int j=i;j<=n;j++)
            {
               
                if( should_swap(nums,j,i))
                {
                swap(nums[i],nums[j]);
                permute(nums,i+1,n);
               swap(nums[i],nums[j]);
                }
            }
        }
    }
  
    void nextPermutation(vector<int>& nums) {
        permute(nums,0,nums.size()-1);
      
       sort(ans.begin(),ans.end());
        /*
        
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].first.size();j++)
                cout<<ans[i].first[j]<<" ";
           cout<<"->"<<ans[i].second<<"\n";
        }
        */
        for(int i=0;i<ans.size();i++)
        {
             if(ans[i].second==0)
             {
                 if(i<ans.size()-1)
                 {
                      for(int j=0;j<ans[i].first.size();j++)
                        {
                            nums[j]=ans[i+1].first[j];
              
                        }
                  
                 }
                 else
                 {
                     for(int j=0;j<ans[i].first.size();j++)
                        {
                            nums[j]=ans[0].first[j];
              
                        }
                 }
                 break;
             }
        }
    
       
        
    }
};