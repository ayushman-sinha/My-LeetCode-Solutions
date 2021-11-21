// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    int bin_ser(vector<int>&nums2,int ns)
    {
        int a=0;
        int b=nums2.size()-1;
        while(a<=b)
        {
            int mid=(a+b)/2;
            if(ns==nums2[mid])
            {
               nums2.erase(nums2.begin()+mid);
                return 1;
            }
            else if(ns>nums2[mid])
                a=mid+1;
            else if(ns<nums2[mid])
                b=mid-1;
        }
        return -1;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
       
        for(int i=0;i<nums1.size();i++)
        {
          
                if(bin_ser(nums2,nums1[i])==1)
                ans.push_back(nums1[i]);
            
        }
        
      
        return ans;
    }
};