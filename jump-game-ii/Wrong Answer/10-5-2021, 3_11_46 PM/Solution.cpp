// https://leetcode.com/problems/jump-game-ii

class Solution {
public:
    int jump(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                if(nums[i]+i>=nums.size()-1)
                {
                    c++;
                    break;
                }
                int j=i;int k=0;c++;
             while(j<=nums[i]+i&&j<nums.size())
             {
                 if(nums[j]>nums[i]-k)
                 {
                     i=j-1;
                     break;
                 }
                 k++;
                 j++;
             }
            }
            else
            {
                if(i+nums[i]>=nums.size()-1)
                {
                    c++;
                    break;
                }
                c++;
                
            }
        }
        return c;
    }
};