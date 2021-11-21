// https://leetcode.com/problems/partition-array-into-two-arrays-to-minimize-sum-difference

class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=0;
        int b=nums.size()-1;
        int size=(nums.size())/2;
        int sum1=0,sum2=0;
        int c=0;
        while(a<=b)
        {
            
          if(c+1==size)
          {
              sum1+=nums[b];
              nums[b]=0;
              break;
          }
            if(c+2==size)
            {
                sum1+=nums[a]+nums[b];
            nums[a]=0;
            nums[b]=0;
                break;
            }
            sum1+=nums[a]+nums[b];
            nums[a]=0;
            nums[b]=0;
            c+=2;
           
            a++;
            b--;
        }
        for(int i=0;i<nums.size();i++)
        {
        sum2+=nums[i];
            cout<<nums[i]<<" ";
        }
        return (abs(sum1-sum2));
        
    }
};