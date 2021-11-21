// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
 
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;auto i=nums.begin();int c=0;
       int prev=0;
        if(nums.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        while(i<nums.end())
        {
            
           auto it=find(i,nums.end(),target);
            if(it==nums.end())
            {
               if(c==0) 
               {
                   ans.push_back(-1);
                   ans.push_back(-1);
                   return ans;                   
               }
                else
                {
                    if(i==nums.begin()+1)
                        ans.push_back(0);
                    else
                   ans.push_back(prev);
                    break;
                }
            }
            else
            {
                if(c==0)
                {
                    ans.push_back(it-nums.begin());
                }
                c++;   
                prev=it-nums.begin();
            }
           i=it+1;
                  if(i==nums.end()-1)
                    {
                        if(*i==target)
                            ans.push_back(nums.size()-1);
                    }
        }
       
        if(ans.size()==1)
            ans.push_back(ans[0]);
      
    
        return ans;
    }
};