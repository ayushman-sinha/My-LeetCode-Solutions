// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        vector<int>ans;
        while(i<=nums.size())
        {
            if(!binary_search(nums.begin(),nums.end(),i))
                ans.push_back(i);
            i++;
                
        }
        return ans;
    }
};