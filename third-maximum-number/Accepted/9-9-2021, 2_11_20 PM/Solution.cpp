// https://leetcode.com/problems/third-maximum-number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater <int>());
        vector<int>ar;
        for(int i=0;i<nums.size();i++)
        {
           
            for(int j=i;j<nums.size();j++)
            {
                if(nums[i]!=nums[j])
                {
                  
                    ar.push_back(nums[i]);
                      i=j-1;
                    break;
                }
            }
        }
        ar.push_back(nums[nums.size()-1]);
        for(int i=0;i<ar.size();i++)
            cout<<ar[i]<<" ";
        cout<<"\n";
        
        if(ar.size()<3)
            return ar[0];
        else
            return ar[2];
            
      
     
    }
    
};