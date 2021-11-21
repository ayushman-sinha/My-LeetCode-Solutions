// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        
        vector <int>a;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums.at(i)+nums.at(i+1)==target)
            {
                a.push_back(i);
                a.push_back(i+1);
                break;
            }
        }
        return a;
    }
};