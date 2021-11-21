// https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       
      for(auto i=nums.begin();i!=nums.end();i++)
      {
          if(*i==val)
            { 
              nums.erase(i);
              i--;
            }
      }
        return nums.size();
    }
};