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
        vector<int>ans;
        int k=bin_search(nums,target);
         int a=k,b=k;
        if(k==-1)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        else
        {
           int c1=0,c2=0;;
            while(c1!=1&&c2!=1)
            {
                if(b<nums.size()&&c1!=1)
                {
                    if(nums[b]==nums[k])
                    {
                        
                        b++;
                    }
                    else
                    {
                       
                     c1=1;
                    }
                }
                else if(a>=0&&c2!=1)
                {
                     
                   if(nums[a]==nums[k])
                    {
                        a--;
                    }
                    else
                    { 
                        
                        c2=1;
                    }
                }
                else
                    break;
            }
            
        }
        if(a<0)
            a=1;
        ans.push_back(a-1);
        ans.push_back(b-1);
        return ans;
    }
};