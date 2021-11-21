// https://leetcode.com/problems/single-number-iii

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) 
            m[nums[i]]++;
        vector<int>ans;
        
            for(auto i=m.begin();i!=m.end();i++) 
                {
                if(i->second==1) 
                    ans.push_back(i->first);
              if(ans.size()==2) 
                break;
                 }
        return ans;
                

    }
};