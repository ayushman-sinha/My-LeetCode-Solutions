// https://leetcode.com/problems/sort-array-by-parity-ii

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      
       stack<int>even;
        stack<int>odd;
        
        for(int i=0;i<nums.size();i++)
        {
               if(i%2==0&&nums[i]%2==0)
               {
                 continue;
                }
           else if(i%2!=0&&nums[i]%2!=0)
            {
                continue;
            }
            else
            {
                if(i%2==0&&nums[i]%2!=0)
                {
                    odd.push(nums[i]);
                    nums[i]=-1;
                }
                else if(i%2!=0&&nums[i]%2==0)
                {
                   even.push(nums[i]);
                     nums[i]=-1;
                }
            }
            
          
        }
       
        for(int i=0;i<nums.size();i++)
        {
            if(even.empty()&&odd.empty())
                break;
           if(nums[i]==-1&&i%2==0)
           {
               nums[i]=even.top();
               even.pop();
           }
            if(nums[i]==-1&&i%2!=0)
           {
               nums[i]=odd.top();
               odd.pop();
           }
        }
       return nums;
    }
};