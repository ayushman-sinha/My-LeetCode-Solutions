// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty())
            return 0;
        for(auto i=nums.begin();i<nums.end()-1;i++)
        {
            if(*i==*(i+1))
            {
                nums.erase(i+1);
                i--;
            }
        }
        return nums.size();
    }
};