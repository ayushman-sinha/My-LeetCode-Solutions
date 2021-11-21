// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>>ar;
        for(int i=0;i<nums.size();i++)        
          ar.push_back(make_pair(nums[i],i));        
        sort(ar.begin(),ar.end());
        for(int i=0;i<ar.size()-1;i++)
        {
            if(ar[i].first==ar[i+1].first)
            {
                if(abs(ar[i].second-ar[i+1].second)<=k)
                    return true;
            }
        }
        return false;
    }
};