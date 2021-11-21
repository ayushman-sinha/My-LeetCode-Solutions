// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        if(nums1.size()<nums2.size())
        {
        for(int i=0;i<nums1.size();i++)
        {
            if(binary_search(nums2.begin(),nums2.end(),nums1[i]))
            {
                ans.push_back(nums1[i]);
            }
        }
        }
        else
        {
             for(int i=0;i<nums2.size();i++)
           {
            if(binary_search(nums1.begin(),nums1.end(),nums2[i]))
            {
                ans.push_back(nums2[i]);
            }
           }
        }
        return ans;
    }
};