// https://leetcode.com/problems/two-out-of-three

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        set<int>ds;
       for(int i=0;i<nums1.size();i++)
          ds.insert(nums1[i]);
         for(int i=0;i<nums2.size();i++)
           ds.insert(nums2[i]);
         for(int i=0;i<nums3.size();i++)
            ds.insert(nums3[i]);
        
        sort(nums1.begin(),nums1.end());
   sort(nums2.begin(),nums2.end());
         sort(nums3.begin(),nums3.end());
        for(auto i=ds.begin();i!=ds.end();i++)
        {
             if(binary_search(nums1.begin(),nums1.end(),*i)&&binary_search(nums2.begin(),nums2.end(),*i))
                 ans.push_back(*i);
            else if(binary_search(nums2.begin(),nums2.end(),*i)&&binary_search(nums3.begin(),nums3.end(),*i))
                 ans.push_back(*i);
            else if(binary_search(nums1.begin(),nums1.end(),*i)&&binary_search(nums3.begin(),nums3.end(),*i))
                 ans.push_back(*i);
        }
        return ans;
      
    }
};