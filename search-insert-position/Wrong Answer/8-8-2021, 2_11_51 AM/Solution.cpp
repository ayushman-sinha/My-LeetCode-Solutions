// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=0;int c=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if((target>nums.at(i))&&(target<=nums.at(i+1)))
            {
                index=i+1;
                c=1;
                break;
            }
                
        }
        if(c==1)
            return index;
        else            
        {
            if(target<nums.at(0))
               return 0;
            
           
         else
             {
             int si=nums.size()-1;
              return si+1;
         }
            
        }
    }
    
};