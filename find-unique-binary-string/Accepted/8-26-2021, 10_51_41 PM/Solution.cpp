// https://leetcode.com/problems/find-unique-binary-string

class Solution {
public:
    
    string findDifferentBinaryString(vector<string>& nums) {
         string s="";
       // cout<<nums.size()<<" ";
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i][i]=='0')
                s+='1';
            else
                s+='0';
        }
        return s;
    }
};