// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    int bin_search(vector<int>ar,int ns)
    {
        int a=0;
        int b=ar.size()-1;
        while(a<=b)
        {
            int mid=(a+b)/2;
            if(ar[mid]==ns)
                return mid;
            else if(ar[mid]<ns)
                a=mid+1;
            else if(ar[mid]>ns)
                b=mid-1;
                       
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;auto i=nums.begin();int c=0;
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
                   
                   ans.push_back(it-nums.begin()-2);
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