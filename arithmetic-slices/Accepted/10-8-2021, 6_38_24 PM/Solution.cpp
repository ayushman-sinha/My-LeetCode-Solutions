// https://leetcode.com/problems/arithmetic-slices

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count=0;int c=0;int prev=0;
        if(nums.size()<3)
            return 0;int start=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            
            if(nums[i+1]-nums[i]==nums[i+2]-nums[i+1])
            {
               c++;
            }
            else
            {
                int c1=0;
                for(int j=1;j<c;j++)
                    c1+=j;
                
                 count=count+c+c1;
                c=0;
            }
            if(i==nums.size()-3&&c!=0)
            {
               
                int c1=0;
                for(int j=1;j<c;j++)
                    c1+=j;
                
                 count=count+c+c1;
                break;
            }
        }
        return count;
    }
};