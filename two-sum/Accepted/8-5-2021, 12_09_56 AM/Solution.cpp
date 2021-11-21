// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        
        vector <int>a;int m=1;int k=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=m;j<nums.size();j++)
            {
            if(nums.at(i)+nums.at(j)==target)
            {
                a.push_back(i);
                a.push_back(j);k=1;
                break;
            }
            }
            if(k==1)
                break;
            m++;
        }
       return a;
    }
};