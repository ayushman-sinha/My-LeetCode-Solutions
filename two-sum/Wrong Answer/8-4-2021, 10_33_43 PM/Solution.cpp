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
        if(!a.empty())
        return a;
        else
        {
            
            for(int i=0;i<nums.size()-1;i++)
            {
                for(int j=i+1;j<nums.size()-2;j++)
                {
                  if(nums.at(i)+nums.at(j)==target)
                {
                a.push_back(i);
                a.push_back(j);
                break;
                }  
                    if(a.empty())
                        break;
                }
             }
            return a;
        }
    }
};