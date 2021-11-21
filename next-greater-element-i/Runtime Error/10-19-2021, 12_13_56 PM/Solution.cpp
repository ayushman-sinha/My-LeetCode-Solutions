// https://leetcode.com/problems/next-greater-element-i

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ar;
        for(int i=0;i<nums1.size();i++)
        {
            auto f=find(nums2.begin(),nums2.end(),nums1[i]);
            bool b=false;
            for(auto j=f+1;j!=nums2.end();j++)
            {
                if(*j>*f)
                {
                    ar.push_back(*j);
                  *j=-1;
                    b=true;
                    break;
                }
            }
            if(b==false)
                ar.push_back(-1);
        }
        return ar;
    }
};