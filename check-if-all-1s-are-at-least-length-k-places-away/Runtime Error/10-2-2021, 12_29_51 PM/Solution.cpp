// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>dif;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                dif.push_back(i);
        }
        for(int i=0;i<dif.size()-1;i++)
        {
            if(dif[i+1]-dif[i]-1<k)
                return false;
        }
        return true;
    }
};