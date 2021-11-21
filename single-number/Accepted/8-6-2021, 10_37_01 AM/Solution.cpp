// https://leetcode.com/problems/single-number

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)
            return nums.at(0);
        sort(nums.begin(),nums.end());
        int c=0;
        int si=nums.size();
        if(nums.at(0)!=nums.at(1))
        return nums.at(0);
        else if((nums.at(si-2)!=nums.at(si-1)))
            return nums.at(si-1);
        else
        {
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums.at(i)==nums.at(i+1))
            {
                i++;
             }
            else
            {
                c=nums.at(i);
            }
        }
            return c;
        }
        
    }
};